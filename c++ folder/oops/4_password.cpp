#include <iostream>
using namespace std;

class bankclass{
    private:
        int money;
        int upipin;
    public:
        string name;
        bankclass (string naam , int paisa){
            name = naam;
            money = paisa;

        }
        void bankbalance(){
            cout << "Your bank balance is " << money << endl;

        }
        void moneyadded(int x){
            money = money +x;
            cout << "Present bank balance is " << money << "\n"; 
        }

        void moneydeducted(int x){
            if (money>=x){
                money -= x;
            }else{
                cout <<" not enough bank balance" << "\n";
            }
            cout << "Present bank balance is :" << money << "\n"; 
        }

};

int main(){
    bankclass myobj("gullu",200);
    myobj.moneyadded(200);
    myobj.moneydeducted(50);
    myobj.moneydeducted(3233);
    
}