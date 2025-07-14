#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> arr;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            arr.push_back(i);
        }
    }
    for (int f : arr) {
        cout << f << " ";
    }
    cout << endl;
    return 0;
}