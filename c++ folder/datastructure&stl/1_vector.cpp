#include <iostream>
using namespace std;
#include  <vector>

int main(){
    vector <int> myarr = {5,9,8,6,7,8,6,9};
    cout << "size of myarr is :"<<myarr.size() << endl;
    cout << "Capacity of myarr is :" << myarr.capacity() << endl;

    for (int a : myarr){
        cout << a << endl;
    }

    cout << myarr.front() <<endl;
    cout << myarr.back() <<endl;

    // cout << myarr.at(2);
    // cout << myarr[2] << endl;
    myarr.push_back(667) ;
    cout << myarr.back()  << endl;
    myarr.pop_back();
    cout << myarr.back() << endl;
    cout << myarr.empty();
    return 0;
}



