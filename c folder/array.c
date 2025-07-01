// int myNumbers[] = {25, 50, 75, 100};

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   printf("%d", myNumbers[0]);
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   myNumbers[0] = 33;

//   printf("%d", myNumbers[0]);
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   int i;
  
//   for (i = 0; i < 4; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
 
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   // Declare an array of four integers:
//   int myNumbers[4];

//   // Add elements to it
//   myNumbers[0] = 25;
//   myNumbers[1] = 50;
//   myNumbers[2] = 75;
//   myNumbers[3] = 100;

//   printf("%d\n", myNumbers[0]);
 
//   return 0;
// }

//  all elements in an array must be of the same data type.

// int myNumbers[] = {10, 25, 50, 75, 100};
// printf("%zu", sizeof(myNumbers)); // Prints 20


// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   int i;
  
//   for (i = 0; i < 4; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
 
//   return 0;
// }
// It is better to write:

// #include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
//   int i;

//   for (i = 0; i < length; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
  
//   return 0;
// }


// #include <stdio.h>

// int main() {
//   // An array storing different ages
//   int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
//   float avg, sum = 0;
//   int i;
  
//   // Get the length of the array
//   int length = sizeof(ages) / sizeof(ages[0]);
    
//   // Loop through the elements of the array and accumulate the sum
//   for (i = 0; i < length; i++) {
//     sum += ages[i];
//   }
  
//   // Calculate the average by dividing the sum by the length
//   avg = sum / length;
  
//   // Print the average
//   printf("The average age is: %.2f", avg);
  
//   return 0;
// }


// #include <stdio.h>
// int main(){
//     int ages[]={25,98,69,78,52,3,46};
//     int i;
//     int min=ages[0];
//     int length =sizeof(ages)/sizeof(ages[0]);
//     for (i=0;i<length;i++){
//         if (min>ages[i]){
//             min=ages[i];
//         }

//     }printf("The minimum age is: %d",min);
//     return 0;

// }


// #include <stdio.h>
// int main(){
//     int lst[]={5,6,8,6,9,7,66,465,3,6241,6568,556,75,5,65,6,7,54,5,74,7,5,54,5,5,65,3,5,5};
//     int i,j;
//     int countlst[sizeof(lst)/sizeof(lst[0])];
//     int mode=lst[0];
//     int count,count_index=0;
//     int length = sizeof(lst) / sizeof(lst[0]);
//     for (i=0;i<length;i++){
//         count=0;
//         for (j=0;j<length;j++){
//             if (lst[i]==lst[j]){
//                 count++;
//             }
//         }
//         countlst[i]=count;
//         }
//         for (i=0;i<length;i++){
//             if (countlst[i]>count){
//                 count=countlst[i];
//                 count_index=i;
//                 mode=lst[i];
//             }
//         }
//     printf("The mode is: %d and appearing %d times", mode,count);
//         }

// #include <stdio.h>
// int main(){
//     int lst[]={4,6,546,7,6,7,4,4,24,8,985};
//     int i,count=0;
//     int median;
//     int length = sizeof(lst) / sizeof(lst[0]);
//     if (length%2==0){
//         median=(length/2);
//         printf("%d ", lst[median-1]);
//     }
//     else{

//         median=(length+1)/2;
//         printf("%d ", lst[median-1]);
//     }
//     }

//LOOP IN MULTIDIMENSIONAL ARRAYS   

// #include <stdio.h>
// int main(){
//     int myarr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int i,j;
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             printf("%d  ",myarr[i][j]);

//         }printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int row,col;
//     printf("Enter the number of rows:   ");
//     scanf("%d", &row);
//     printf("Enter the number of columns:   ");
//     scanf("%d", &col);
//     int myarr[row][col];
//     int i,j;
//     for (i=0;i<row;i++){
//         for (j=0;j<col;j++){
//             printf("Enter the elementof array at position [%d][%d] is  :",i,j);
//             scanf("%d", &myarr[i][j]);
//         }
//     }printf("The array is \n\n");
//     for (i=0;i<row;i++){
//         for (j=0;j<col;j++){
//             printf("%d    ",myarr[i][j]);
//         }printf("\n");
//     }
// }