// #include <stdio.h>

// int main() {
//   int x = 20;
//   int y = 18;
//   if (x > y) {
//     printf("x is greater than y");
//   }  
//   return 0;
// }


// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed

// #include <stdio.h>

// int main() {
//   int time = 20;
//   if (time < 18) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }
//   return 0;
// }


// SYNTAX FOR ELSE IF
// if (condition1) {
//   // block of code to be executed if condition1 is true
// } else if (condition2) {
//   // block of code to be executed if the condition1 is false and condition2 is true
// } else {
//   // block of code to be executed if the condition1 is false and condition2 is false
// }


// #include <stdio.h>

// int main() {
//   int time = 22;
//   if (time < 10) {
//     printf("Good morning.");
//   } else if (time < 20) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }
//   return 0;
// }



// SHORT HAND IF ELSE
// Syntax
// variable = (condition) ? expressionTrue : expressionFalse;


// #include <stdio.h>

// int main() {
//   int time = 20;
//   (time < 18) ? printf("Good day.") : printf("Good evening.");
//   return 0;
// }


// IF ELSE PRACTICE SET 
// 1. PASS OR FAIL

// #include <stdio.h>
// int main(){
//     int sub1,sub2,sub3;
//     printf("Enter marks for subject 1");
//     scanf("%d",&sub1);
//     printf("Enter marks for subject 2");
//     scanf("%d",&sub2);
//     printf("Enter marks for subject 3");
//     scanf("%d",&sub3);
//     float per;
//     per = (sub1+sub2+sub3)/3;
//     (per>33) ? printf("pass"):printf("fail");
//     return 0;

// }

// CALCULATOR

// #include <stdio.h>
// int main(){
//     int num1,num2,out;
//     printf("Enter number1 :     ");
//     scanf("%d",&num1);
//     printf("Enter number 2 :    ");
//     scanf("%d",&num2);
//     char ch;
//     printf("Select a operator +,-,*,/,>>,<<   :     ");
//     // Using " %c" to consume any leading whitespace characters
//     scanf(" %c",&ch);
//     if (ch=='+'){
//         out=num1+num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     } else if(ch=='-'){
//         out=num1-num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     } else if(ch=='*'){
//         out=num1*num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     }else if(ch=='/'){
//         out=num1/num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     }else if (ch=='>'){
//         out=num1>>num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     } else if (ch=='<'){
//         out=num1<<num2;
//         printf("The output of %d %c %d is %d",num1,ch,num2,out);
//     }else {
//         printf("Enter valid operator !");
//     }
//     return 0;
// }

// INCOME TAX CALCULATOR

// #include <stdio.h>
// int main(){
//     int income;
//     printf("Enter your income : ");
//     scanf("%d",&income);
//     if (income < 250000) {
//         printf("No tax");
//     } else if (income >= 250000 && income < 500000) {
//         printf("Tax is 5%% of income");
//     } else if (income >= 500000 && income < 1000000) {
//         printf("Tax is 10%% of income");
//     } else if (income >= 1000000 && income < 2000000) {
//         printf("Tax is 20%% of income");
//     } else {
//         printf("Tax is 30%% of income");
//     }
// }

// LEAP YEAR CODE
// #include <stdio.h>
// int main(){
//     int year;
//     printf("Enter year");
//     scanf("%d",&year);
//     if (year%4==0){
//         printf("%d is a leap year",year);
//     }else{
//         printf("%d is not a leap year",year);
//     }
// }

// LOWERCASE CHECK

// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character");
//     scanf("%c",&ch);
//     if (ch>='a'&& ch<='z'){
//         printf("Entered number is in lowercase");
//     }else {
//         printf("Entered number is not lowercase");
//     }
// }


// GREATEST OF FOUR NUMBERS ENTERED BY USER

// #include <stdio.h>
// int main(){
//     int num1,num2,num3,num4;
//     printf("Enter 1st number");
//     scanf("%d",&num1);
//     printf("Enter 2nd number");
//     scanf("%d",&num2);
//     printf("Enter 3rd number");
//     scanf("%d",&num3);
//     printf("Enter 4th number");
//     scanf("%d",&num4);

//     if (num1>num2 && num1>num3 && num1>num4){
//         printf("%d is the greatest among all",num1);

//     }else if (num2>num1 && num2>num3 && num2>num4){
//         printf("%d is the greatest amon all",num2);

//     }else if (num3>num1 && num3>num2 && num3>num4){
//         printf("%d is the greatest among all",num3);
    
//     }else if(num4>num1 && num4>num2 && num4>num3){
//         printf("%d is the greatest among all",num4);
//     }


// }

// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

// #include <stdio.h>
// int main(){
//     int unit;
//     float amt,total_amt,surge;
//     printf("Enter number of units");
//     scanf("%d",&unit);
//     if (unit<=50){
//         amt=unit*0.5;
//     } else if (unit>50 && unit<=100){
//         amt=unit*0.75;
//     } else if(unit>100 && unit<=200){
//         amt = unit* 1.20;
//     } else if(unit>250){
//         amt = unit*1.5;
//     }
//     surge=amt*0.20;
//     total_amt=amt+surge;
//     printf("Total amount will be : %f ",total_amt);
//     return 0;

// }


// Write a C program to check whether a number is divisible by 81 or not.

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if (num %81==0){
//         printf("The number is divisible by 81");
//     } else{
//         printf("The number is not divisible by 81");
//     }
// }

 