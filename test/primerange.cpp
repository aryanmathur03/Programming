#include <iostream>
using namespace std;

bool primecheck(int a ){
    if (a<2){
        cout << "No prime numbers in the range." << endl;
        return false;
    }
        bool flag = true;
        for (int i=2 ; i*i<=a;i++){
            if (a%i==0){
                flag = false;
                break;
            }

        }
        if (flag ){
            return true; 

        }
        else{
            return false;
        }
    }

int main(){
    int a , b;
    cout << "Enter the range (a b): ";
    cin >> a >> b;
    cout << "Prime numbers in the range " << a << " to " << b << " are: ";   
    for (int i= a ; i<=b;i++){
        if (primecheck(i)){
            cout << i << " ";
        }
    }

}