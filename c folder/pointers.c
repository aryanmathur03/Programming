// #include <stdio.h>

// int main() {
//     int num;
//     int *ptr;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     ptr = &num; // ptr stores the address of num

//     printf("Value of num: %d\n", num);
//     printf("Address of num: %p\n", &num);
//     printf("Address stored in ptr: %p\n", ptr);
//     printf("Value pointed to by ptr: %d\n", *ptr);

//     return 0;
// }




// void increment(int *num_ptr) {
//     (*num_ptr)++; // Dereference the pointer to modify the original value
// }

// int main() {
//     int x = 10;
//     increment(&x); // Pass the address of x
//     // x is now 11
//     printf("%d",x);
//     return 0;
// }

// #include <stdio.h>

// void xchange(int *x) {
//     *x = 34;
// }

// int main() {
//     int x = 43;
//     int* var = &x;
//     xchange(var);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x = 10;
//     printf("Value of x using *(&x): %d\n", *(&x)); 
//     *(&x) = 20; 
//     printf("New value of x after *(&x) is  %d\n", x);
//     return 0;
// }

#include <stdio.h>

int main() {
    int x = 10;
    printf("Value of x: %d\n", x);
    printf("Address of x (hexadecimal): %p\n", &x);   
    printf("Value of x using *(&x): %d\n", *(&x));
    *(&x) = 20;
    printf("New value of x after *(&x) = 20: %d\n", x);
    return 0;
    
}

// %d or %i: For signed decimal integers (int).
// %u: For unsigned decimal integers (unsigned int).
// %f: For single-precision floating-point numbers (float).
// %lf: For double-precision floating-point numbers (double).
// %c: For a single character (char).
// %s: For a string (null-terminated character array).
// %x or %X: For hexadecimal integers (lowercase or uppercase, respectively).
// %o: For octal integers.
// %p: For displaying a pointer address.