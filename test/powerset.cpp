#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the set: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pow_size = 1 << n; // 2^n subsets

    cout << "Powerset:\n";
    for (int i = 0; i < pow_size; i++) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

void printPowerset(vector<int>& arr, int i, vector<int>& subset) {
    if (i == arr.size()) {
        cout << "{ ";
        for (int val : subset) cout << val << " ";
        cout << "}" << endl;
        return;
    }
    // Exclude current element
    printPowerset(arr, i + 1, subset);
    // Include current element
    subset.push_back(arr[i]);
    printPowerset(arr, i + 1, subset);
    subset.pop_back();
}

int main() {
    int n;
    cout << "Enter number of elements in the set: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> subset;
    cout << "Powerset:\n";
    printPowerset(arr, 0, subset);
    return 0;
}