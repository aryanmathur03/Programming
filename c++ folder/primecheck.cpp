#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> arr;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 2) arr.push_back(2);

    for (int i = 3; i <= num; i++) {
        bool isPrime = true;
        for (int p : arr) {
            if (p * p > i) break;
            if (i % p == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            arr.push_back(i);
        }
    }

    for (int prime : arr) {
        cout << prime << " ";
    }
    cout << endl;
    return 0;
}