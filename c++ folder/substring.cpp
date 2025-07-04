#include <iostream>
using namespace std;
#include <string>
#include <vector>
//print all substrings of a string
int main(){
    string s ="abcderf";
    string sub;
    vector<string> substrings;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j <= l; j++) {
            sub = s.substr(i, j - i);
            substrings.push_back(sub);
            
        }
    }

    for (const string& str : substrings) {
        cout << str << endl;
    }
    return 0;
}