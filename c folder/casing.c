// #include <stdio.h>
// int main(){
//     int a=23;
//     a=5;
//     printf("%d",a);
//     return 0;
// }

#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  
  return 0;
}

#include <stdio.h>

int main() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}
