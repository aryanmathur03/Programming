// #include <stdio.h>

// int printMessage() {
//     printf("Hello, this is a message from the function!\n");
//     return 5;
// }
// int main(){
//     int a;
//     a=printMessage();
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
// int primecheck(){
//     int i, n, flag =0 ;
//     printf("Enter a number: "); 
//     scanf("%d", &n);
//     for (i=2;i<=n/2;i++){
//         if (n%i==0){
//             flag =1;
//             break;
//         }else{
//             flag=0;
//         }
//     }if (flag==0){
//         return 0;
//     }else{
//         return 1;
// }
// }
// int main(){
//     int a;
//     a=primecheck();
//     if (a==0){
//         printf("The number is prime");
//     } else {
//         printf("The number is not prime");
//     }
//     return 0;

// #include <stdio.h>
// int sum(int n){
//     if (n==0){
//         return 0;
//     }else{
//         return (n%10)+sum(n/10);
//     }
// }

// int main(){
//     int i,n;
//     printf("Enter a number  :   ");
//     scanf("%d", &n);
//     printf("Sum of digit is :%d",sum(n));
// }

#include <stdio.h>
int power(int base , int exp){
    if (exp==0){
        return 1;
    }else{
        return base * power(base,exp-1);
    }
}

int main(){
    int x,y;
    printf("Enter a base :    ");
    scanf("%d", &x);
    printf("Enter exponent:  ");
    scanf("%d", &y);
    printf("%d ^ %d = %d",x,y,power(x,y));
}