// #include <iostream>
// using namespace std;

// template < typename T>
// T maxnum(T a ,T b){
//     if (a>b){
//         return a;
//     }else{
//         return b;
//     }
   
//     }
// template <typename T>
// T concat(T a, T b) {
//     return a + b;
// }

// int main(){
//     int n1,n2;
//     cout <<"Enter 2 numbers  :";
//     cin >> n1;
//     cin>>n2;
//     cout << "Maximum of " << n1 << "  and  " << n2 << "  is " << maxnum<int>(n1,n2) << endl; 
//     cout << "Enter 2 strings ";
//     int s1,s2;
//     cin >> s1 >>s2;
//     cout <<"Concatenation of these 2 string is :" << concat<int>(s1,s2);
//     return 0;



// }

#include <iostream>
#include <string>
using namespace std;


template <typename T>
T add(T a, T b) {
    return a + b;
}

string concat(string a, string b) {
    return a + b;
}

int main() {
    string type, op;
    cout << "Enter type of variable (int/string): ";
    cin >> type;
    cout << "Enter operation (add/concat): ";
    cin >> op;

    if (type == "int" && op == "add") {
        int a, b;
        cout << "Enter 2 integers: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b) << endl;
    } else if (type == "string" && op == "concat") {
        string a, b;
        cout << "Enter 2 strings: ";
        cin >> a >> b;
        cout << "Result: " << concat(a, b) << endl;
    } else {
        cout << "Invalid type or operation!" << endl;
    }
    return 0;
}