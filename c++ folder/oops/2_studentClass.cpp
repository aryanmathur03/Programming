#include <iostream>
using namespace std ; 

class Student {
    public :
        int roll_no ;
        string name ; 
        string subject ; 
        
        
}; // in functions , semicolon donot comes - but in class it exists

int main(){
    Student myobj;
    cin >> myobj.roll_no >> myobj.name >> myobj.subject;

    cout << myobj.roll_no <<" " << myobj.name<< " " <<  myobj.subject;
    return 0;
}