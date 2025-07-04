#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> myvector;
    string out ="y";
    while (out == "y" || out == "Y"){
        int  n;
        cout << "Enter element to pushback : ";
        cin >> n;
        myvector.push_back(n);

        cout << "Current size is :" << myvector.size() << endl;
        cout << "Current capacity is :" << myvector.capacity() << endl;
        cout << "Vector elements are : ";
        for (int val : myvector){
            cout << val << " , " ;
        }
        cout << endl;
        cout <<"Do you want to add another element ?? (y/n)";
        cin >> out ;
        if (out=="n"){
            cout << "size of vector is : " << myvector.size() <<endl;
            cout << "capacity of vector is : " << myvector.capacity() <<endl;
            cout <<"Elements of vector is : "; 
            for (int val : myvector){
            cout << val << " , " ;
        }
        }

        
    }



    return 0;
}