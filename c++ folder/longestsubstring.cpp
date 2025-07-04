#include <iostream>
using namespace std;
#include <string>
#include <vector>
//print all substrings of a string
int main(){
    string s ="abcdasasadaafedgperf";
    string sub;
    vector<string> substrings;
    int max = 1;
    string longestSubstring;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j <= l; j++) {
            sub = s.substr(i, j - i);
            substrings.push_back(sub);
            
        }
    }

    for(int i=0 ; i<substrings.size() ; i++ ){
        bool isDuplicate = false;
        string mystr = substrings[i];
        for (int j = 0 ; j < mystr.length() ; j++){
            char myelement = mystr[j] ; 
            for (int k = j + 1 ; k < mystr.length() ; k++){
                if (myelement == mystr[k]){
                    // cout << "Duplicate character found in substring: " << mystr << endl;
                    isDuplicate = true;
                    break; // Exit the inner loop if a duplicate is found
                }
            } 
        }  
        if (!isDuplicate) {
            
            if (mystr.length() > max) {
                max = mystr.length();
                longestSubstring = mystr;
            }
        }
    }
    cout << "Longest substring without repeating characters: " << longestSubstring << endl;


    // for (const string& str : substrings) {
    //     cout << str << endl;
    // }
    return 0;
}