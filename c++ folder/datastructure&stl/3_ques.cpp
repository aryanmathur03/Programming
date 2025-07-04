#include <iostream>
using namespace std;
#include <vector>


bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){

    vector <int> myvector;
    string out ="y";
    while (out == "y" || out == "Y"){
        int  n;
        cout << "Enter element to pushback : ";
        cin >> n;
        myvector.push_back(n);
        cout << "Vector elements are : ";
        for (int val : myvector){
            cout << val << " , " ;
        }
        cout << endl;
        cout <<"Do you want to add another element ?? (y/n)";
        cin >> out ;
        
        }
    int count=0;
    cout << "\nPrime check for vector elements:\n";
    for (int val : myvector) {
           if (isPrime(val)){
             cout << val << " is prime\n";
                count ++;  
           }
                
        }
    cout << "Total prime numbers in this vector is : " << count ;
    
    
    return 0;
}