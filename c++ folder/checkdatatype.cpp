#include <iostream>
using namespace std;
#include <typeinfo>

int main(){
    int a = 5;
    string b = "Hello";
    char d = 'A';
    double c = 3.14;    
    cout << "Type of a  is: " << typeid(a).name() << endl;
    cout << "Type of b  is: " << typeid(b).name() << endl;
    cout << "Type of c  is: " << typeid(c).name() << endl;
    // cout << "Type of a+b is: " << typeid(a + b).name() << endl;
    cout << "Type of a+c is: " << typeid(a + c).name() << endl;
    // cout << "Type of b+c is: " << typeid(b + c).name() << endl;
    // cout << "Type of a*b is: " << typeid(a * b).name() << endl;
    cout << "Type of a*c is: " << typeid(a * c).name()  << endl;
    cout << "type of d is : " << typeid(d).name() << endl;
    return 0;
}