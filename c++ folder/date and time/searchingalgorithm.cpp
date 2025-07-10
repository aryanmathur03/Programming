// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid;  // key found
//         else if (arr[mid] < key)
//             low = mid + 1;  // search in right half
//         else
//             high = mid - 1; // search in left half
//     }
//     return -1; // key not found
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};  // Must be sorted
//     int key = 20;
//     int result = binarySearch(arr, 5, key);
//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found" << endl;
// }

// using built-in functions binary search

#include <iostream>
using namespace std;

// Binary search function
int binarySearch(int arr[], int n, int key) {
    int low = 0;           // start index
    int high = n - 1;      // end index

    while (low <= high) {
        int mid = (low + high) / 2; // find middle index

        // check if key is at mid
        if (arr[mid] == key)
            return mid;

        // if key is greater, search in right half
        else if (arr[mid] < key)
            low = mid + 1;

        // if key is smaller, search in left half
        else
            high = mid - 1;
    }

    return -1;  // key not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};  // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}


