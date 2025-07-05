#include <iostream>
using namespace std;
#include <list>

int main(){
    list <int> mylist = {2, 5, 6, 7, 8, 45};
    list <int> reverselist;

    for (int val : mylist){
        reverselist.push_front(val); 
    }

    cout << "Reversed list is :";
    for (int val : reverselist){
        cout << val << " ";
    }


    return 0;
}