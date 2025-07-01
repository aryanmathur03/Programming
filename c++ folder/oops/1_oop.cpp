#include <iostream>
using namespace std;

class myclass{
        public:
            int mynum;
            string mystring;

};


int main(){
    myclass myobj;
    
    myobj.mynum = 67;
    myobj.mystring = "name";

    cout << myobj.mynum << "\n";
    cout << myobj.mystring ;
    return 0;
}