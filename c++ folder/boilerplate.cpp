#include <iostream>
using namespace std;
int main(){
    string line, multiline;
    cout << "Enter multiline input (end with an empty line):\n";
    while (getline(cin, line)) {
        if (line.empty()) break; // Stop on empty line
        multiline += line + "\n";
    }
    cout << "You entered:\n" << multiline;
    return 0;;
}