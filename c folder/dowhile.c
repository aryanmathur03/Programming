// do {
//   // code block to be executed
// }
// while (condition);


// #include <stdio.h>

// int main() {
//   int i = 0;
  
//   do {
//     printf("%d\n", i);
//     i++;
//   }
//   while (i < 5);
  
//   return 0;
// }


// #include <stdio.h>

// int main() {
//   int i = 10;

//   do {
//     printf("i is %d\n", i);
//     i++;
//   } while (i < 5);
  
//   return 0;
// }


// The do/while loop always runs at least once, even if the condition is already false. This is different from a regular while loop, which would skip the loop entirely if the condition is false at the start.

// This behavior makes do/while useful when you want to ensure something happens at least once, like showing a message or asking for user input.

// #include <stdio.h>

// int main() {
//   int number;

//   do {
//     printf("Enter a positive number: ");
//     scanf("%d", &number);
//   } while (number > 0);

//   return 0;
// }
