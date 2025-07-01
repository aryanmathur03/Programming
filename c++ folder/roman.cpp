#include <iostream>
using namespace std;

string roman(int n){
    string rom="";
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string symbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    for (int i=0;i<13;i++){
        while (n>=values[i]){
            rom+=symbols[i];
            n-=values[i];
        }
    }
    return rom;
}

int main(){
    int n;
    cout << "Enter a number b/w 1-3999       :";
    cin >> n;
    if (n<1 || n>3999){
        cout << "Invalid input";
    }else{
        cout << "roman number is :  " << roman(n) << endl;
    }
    return 0;
    

}
