#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> myvector = {5,4,8,9,6,7};

    // myvector.erase(myvector.begin()+2); // Erase the element at index 2 (which is 8)
    // cout << "Vector after erasing first element: ";
    myvector.erase(myvector.begin()+1,myvector.begin()+3);
    for (int val : myvector){
        cout << val << " , ";
    }
    myvector.insert(myvector.begin()+1, 10); // Insert 10 at index 1
    cout << "\nVector after inserting 10 at index 1: "; 
    for (int val : myvector){
        cout << val << " , ";
    }

    return 0;
}


