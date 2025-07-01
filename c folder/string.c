// char greetings[] = "Hello World!";

// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   printf("%s", greetings);
 
//   return 0;
// }

// char greetings[] = "Hello World!";
// printf("%c", greetings[0]);

// #include <stdio.h>

// int main() {
//   char greetings[] = "Hello World!";
//   greetings[0] = 'J';
//   printf("%s", greetings);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char carName[] = "Volvo";
//   int i;
  
//   for (i = 0; i < 5; ++i) {
//     printf("%c\n", carName[i]);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   char carName[] = "Volvo";
//   int length = sizeof(carName) / sizeof(carName[0]);
//   int i;
  
//   for (i = 0; i < length; ++i) {
//     printf("%c\n", carName[i]);
//   }

//   return 0;
// }

// char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
// printf("%s", greetings);


// #include <stdio.h>

// int main() {
//   char message[] = "Good to see you,";
//   char fname[] = "John";

//   printf("%s %s!", message, fname);
 
//   return 0;
// }


// #include <string.h>


// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   printf("%zu", strlen(alphabet));
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   printf("Length is: %zu\n", strlen(alphabet));
//   printf("Size is: %zu\n", sizeof(alphabet));
//   return 0;
// }

// Length is: 26
// Size is: 27

// #include <stdio.h>
// #include <string.h>
 
// int main() {
//   char str1[20] = "Hello ";
//   char str2[] = "World!";
 
//   // Concatenate str2 to str1 (the result is stored in str1)
//   strcat(str1, str2);
  
//   // Print str1
//   printf("%s", str1);
 
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[20] = "Hello World!";
//   char str2[20];

//   // Copy str1 to str2
//   strcpy(str2, str1);

//   // Print str2
//   printf("%s", str2);
  
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str1[] = "Hello";
//   char str2[] = "Hello";
//   char str3[] = "Hi";

//   // Compare str1 and str2, and print the result
//   printf("%d\n", strcmp(str1, str2));
  
//   // Compare str1 and str3, and print the result
//   printf("%d\n", strcmp(str1, str3));
  
//   return 0;
// }
// To compare two strings, you can use the strcmp() function.

// It returns 0 if the two strings are equal, otherwise a value that is not 0:


// #include <stdio.h>

// int main() {
//   // Create a string
//   char fullName[30];

//   // Ask the user to input some text (full name)
//   printf("Type your full name and press enter: \n");

//   // Get the text
//   fgets(fullName, sizeof(fullName), stdin);

//   // Output the text
//   printf("Hello %s", fullName);
  
//   return 0;
// }


// #include <stdio.h>
// //#include <string.h>
// int main(){
//     int num,num2,rem,reverse=0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     num2=num;
//     while (num!=0){
//         rem=num%10;
//         reverse=reverse*10+rem;
//         num=num/10;

//     }if (num2==reverse){
//         printf("The number is a palindrome");

//     }else{
//         printf("The number is not a palindrome");
//     }
    
// }


// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     int i,len;
//     printf("Enter a word: ");
//     scanf("%s", str);
//     len=strlen(str);
//     for (i=0;i<len/2;i++){
//         if (str[i]!=str[len-i-1]){
//             printf("The word is not a palindrome");
//             break;
//         }else{
//             printf("The word is a palindrome");
//             break;
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[20];
//     char reverse[20];
    
//     int i,length;
//     printf("Enter a word: ");
//     scanf("%s", str);
//     length=strlen(str);
//     for(i=0;i<length;i++){
//         reverse[i]=str[length-i-1];

    
//     }
//     reverse[length] = '\0'; // Null-terminate the reversed string
//     char new[40];
//     strcat(str,reverse);
//     printf("The reverse of the word is: %s\n", str);
//     int l2;
//     l2=strlen(str);
//     for (i=0;i<l2/2;i++){
//         if (str[i]!=str[l2-i-1]){
//             printf("The word is not a palindrome");
//             break;
//         }else{
//             printf("The word is a palindrome");
//             break;
//         }

// }
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char string[20];
//     int i,length;

//     printf("Enter a string  :");
//     scanf("%s", string);
//     length=strlen(string);

//     for (i=0;i<length;i++){
//         string[i]=string[i]+1;
//     }printf("Encrypted string is :%s\n",string);
//     return 0
// }

//given char present or not

#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int i,length;
    char c;
    length=strlen(str);
    printf("Enter a string :    ");
    scanf("%s", str);
    printf("Enter a char to check it's occurence    :");
    scanf("%c", &c);
    for (i=0;i<length;i++){
        if (c==str[i]){
            printf("%c is present in the string",c);
        }else{
            printf("%c is not present in the string",c);
        }
    }return 0;
}