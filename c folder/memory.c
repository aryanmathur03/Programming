// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int *students;
//   int numStudents = 12;
//   students = calloc(numStudents, sizeof(*students));
//   printf("%d", numStudents * sizeof(*students)); // 48 bytes
  
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Allocate memory
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));

  // Write to the memory
  *ptr = 2;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr[3]=ptr[1]+ptr[2];
  // Read from the memory
  printf("%d\n", *ptr);
  printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

  return 0;
}