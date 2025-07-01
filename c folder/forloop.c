// for (expression 1; expression 2; expression 3) {
//   // code block to be executed
// }

// Expression 1 is executed (one time) before the execution of the code block.

// Expression 2 defines the condition for executing the code block.

// Expression 3 is executed (every time) after the code block has been executed.

// #include <stdio.h>

// int main() {
//   int i;

//   for (i = 0; i < 5; i++) {
//     printf("%d\n", i);
//   }
  
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int sum = 0;
//   int i;

//   for (i = 1; i <= 5; i++) {
//     sum = sum + i;
//   }

//   printf("Sum is %d", sum);
  
//   return 0;
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for (i = 13; i < 54; i += 4) {
//         printf("%d\n", i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i, j;
//     for (i = 1; i <= 5; i++) {
//         for (j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char i, j;
//     for (i = 'A'; i <= 'E'; i++) {
//         for (j='A';j<=i;j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char i=(char)65;
//     char j;
//     for (i = 65; i <= 69; i++) {
//         for (j=65;j<=i;j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i, j, n, flag =0 ;
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
//         printf("%d is a prime number", n);
//     }else{
//         printf("%d is not a prime number", n);
//     }
// }
