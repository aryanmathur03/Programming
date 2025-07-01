// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string s;
//     cout << "Enter a string : ";
//     cin >> s;
//     int l;
//     l = s.length();
//     cout << "The reveresed string is : ";
//     for (int i=0;i<l;i++){
//         cout << s[l-i-1];
//     }
// }


// #incl0ude <iostream>
// using namespace std;
// #include <string>


// int primecheck();

// int main(){
//     int num;
//     cout << "Enter  a number till u want to print ";
//     cin >> num;
//     for (int i=2;i<num;i++){
//         if ( primecheck(i)){
//             cout << i;
//         }
//     }
// }

// int primecheck(int n){
//     int flag=0;

//     if (n==1 || n==0){
//         cout << "Composite number";
//     }else if(n>1){
//         for (int i=0;i<n;i++){
//             if (n%i==0){
//                 flag =1;
//                 return n;
//             }else{
//                 flag =0;
//             }
//         }
//         if (flag==0){
//             cout << "Composite number";
//         }else{
//             cout << " It's a Prime number";
//         }
//     }

// }

// int primecheck()
// {
//     return 0;
// }



#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Is prime
}

void printAllPrimes(int n) {
    printf("Prime numbers from 2 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printAllPrimes(n);
    return 0;
} 