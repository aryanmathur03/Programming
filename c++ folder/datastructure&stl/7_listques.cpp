#include <iostream>
using namespace std;
#include <list>

//segregate even and odd numbers in a list 
int main(){
    list<int> mylist = {2, 5, 6, 7, 8, 45};
    list<int> evenList, oddList;

    for (int val:mylist){
        if (val % 2 == 0) {
            evenList.push_back(val); // Add even numbers to evenList
        } else {
            oddList.push_back(val); // Add odd numbers to oddList
        }   
    }
    cout << "Even numbers: ";
    for (int val : evenList) {
        cout << val << " ";
    }
    cout << endl << endl;
    cout << "odd numbers: ";
    for (int val : oddList) {
        cout << val << " ";
    }

    return 0;
}