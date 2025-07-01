#include <iostream>
using namespace std;

class bankclass {
    private:
        int money;
        int upipin;
    public:
        string name;
        bankclass(string naam, int paisa) {
            name = naam;
            money = paisa;
        }
        void bankbalance() {
            cout << "Your bank balance is " << money << endl;
        }
        void moneyadded(int x) {
            money = money + x;
            cout << "Present bank balance is " << money << "\n";
        }
        void moneydeducted(int x) {
            if (money >= x) {
                money -= x;
            } else {
                cout << "Not enough bank balance" << "\n";
            }
            cout << "Present bank balance is: " << money << "\n";
        }
        int getbalance() { // Added getter
            return money;
        }
        void setbalance(int x) { // Fixed return type
            money = x;
        }
};

class savingaccount : public bankclass {
    public:
        savingaccount(string naam, int paisa) : bankclass(naam, paisa) {}
        void addinterest(float rate) {
            int bal = getbalance();
            int interest = bal * rate / 100;
            setbalance(bal + interest);
            cout << "Interest of " << interest << " added. New Balance is: ";
            bankbalance();
        }
};

int main() {
    savingaccount myobj("gullu", 200);
    myobj.moneyadded(200);
    myobj.moneydeducted(50);
    myobj.moneydeducted(3233);
    myobj.addinterest(5);
    myobj.bankbalance();
    return 0;
}