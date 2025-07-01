// #include <stdio.h>
// int main(){
//     //int var=34;
//     //int var2=3;
//     printf("%d",23>556);
//     return 0;
// }

#include <stdio.h>

int main() {
  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d", 5 == 55); // Returns 0 (false) because 5 is not equal to 55
  
  return 0;
}

#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isHamburgerTasty = true;
  bool isPizzaTasty = true;
  printf("%d", isHamburgerTasty == isPizzaTasty);
  
  return 0;
}

#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;
  
  printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  return 0;
}