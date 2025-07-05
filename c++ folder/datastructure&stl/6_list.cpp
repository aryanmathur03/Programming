// However, two major differences between lists and vectors are:

// You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

// Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

#include <iostream>
using namespace std;
#include <list>

int main(){
    // list<int> mylist = {2,5,6,7,8,45};
    // for (int i :mylist){
    //     cout << i << endl;
    // }

    list <string> mylist = {"hello","my","name","is","saurabh"};
    for (const string &i : mylist){
        cout << i << endl;
    }

    // cout << mylist.front() << endl; // Accessing first element
    // cout << mylist.back() << endl;  // Accessing last element
    // mylist.push_front("hi");         // Adding element at the front
    // mylist.push_back("aryan");     // Adding element at the back
    // for (const string &i : mylist){
    //     cout << i << endl;
    // }

    // mylist.front()="asfdfg";
    // mylist.back()="abcde";
    // for (string i : mylist){
    //     cout << i << endl;
    // }
    // mylist.pop_back();
    // mylist.pop_front();
    // for (const string &i : mylist){
    //     cout << i << endl;
    // }
    // cout << "size of mylist is: " << mylist.size() << endl; // Size of the list
    // cout << mylist.empty() << endl; // Check if the list is empty (returns 1 if empty, 0 otherwise)
    return 0;
}