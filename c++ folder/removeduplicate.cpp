#include <iostream>
#include <vector>
using namespace std;


vector<int> inputVector(int n) {
    
    vector<int> v;
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    return v;
}

vector<int> removeDuplicates(vector<int>& v) {
    vector<int> unique;

    for (int i = 0; i < v.size(); i++) {
        bool found = false;

        for (int j = 0; j < unique.size(); j++) {
            if (v[i] == unique[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unique.push_back(v[i]);
        }
    }

    return unique;
}

// Function to print a vector
void printVector(const vector<int>& v) {
    for (int num : v)
        cout << num << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums = inputVector(n);

    cout << "\nOriginal Vector: ";
    printVector(nums);

    vector<int> unique = removeDuplicates(nums);
    
    cout << "Vector after removing duplicates (manual method): ";
    printVector(unique);

    return 0;
}
