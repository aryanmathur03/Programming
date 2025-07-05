#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> myvector = {5,4,8,9,6,7};
    cout << "a. for inserting an element at a specific position in the vector\n";
    cout << "b. for erasing an element at a specific position in the vector\n";
    cout << "c. clear vector " << endl;
    string choice;
    cout << "Enter your choice (a/b/c): ";
    cin >> choice;
    if (choice =="a" || choice == "A"){
        int pos, val;
        cout << "Enter the position (index) to insert the element: ";
        cin >> pos;
        cout << "Enter the value to insert: ";
        cin >> val;
        if (pos < 0 || pos > myvector.size()) {
            cout << "Invalid position!" << endl;
        } else {
            myvector.insert(myvector.begin() + pos, val);
            cout << "Vector after insertion: ";
            for (int v : myvector) {
                cout << v << " , ";
            }
            cout << endl;
        }
    } else if (choice == "b" || choice == "B") {
        int pos;
        cout << "Enter the position (index) to erase the element: ";
        cin >> pos;
        if (pos < 0 || pos >= myvector.size()) {
            cout << "Invalid position!" << endl;
        } else {
            myvector.erase(myvector.begin() + pos);
            cout << "Vector after erasure: ";
            for (int v : myvector) {
                cout << v << " , ";
            }
            cout << endl;
        }
    } else if (choice == "c" || choice =="C"){

        myvector.clear();
        cout << "Vector cleared. Size is now: " << myvector.size() << endl;
        cout << "Capacity is now: " << myvector.capacity() << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}