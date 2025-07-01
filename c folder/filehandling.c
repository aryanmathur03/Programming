// #include <stdio.h>

// int main(){
//     FILE  *fptr;
//     fptr = fopen("aryanm.txt","r");
//     // fprintf(fptr,"\n\nHi everbody !");
//     fprintf(fptr);
//     fclose(fptr);  

// }

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Open a file in read mode
//   fptr = fopen("aryanm.txt", "r");

//   // Store the content of the file
//   char myString[100];

//   // Read the content and store it inside myString
//   fgets(myString, 100, fptr);

//   // Print file content
//   printf("%s", myString);  
  
//   // Close the file
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Open a file in read mode
//   fptr = fopen("aryanm.txt", "r");

//   // Store the content of the file
//   char myString[100];

//   // Read the content and print it
//   while(fgets(myString, 100, fptr)) {
//     printf("%s", myString);
//   }

//   // Close the file
//   fclose(fptr);

//   return 0;
// }

