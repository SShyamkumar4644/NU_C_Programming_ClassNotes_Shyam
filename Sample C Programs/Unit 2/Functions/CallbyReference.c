// Call by Reference: The actual variable is passed by its address, 
// allowing the function to modify the original value.

// In Call by Reference, the function is given the reference (or address) 
// of the argument, and any changes made inside the function 
// reflect on the actual argument.

// A pointer holds the address of a variable. 
// When you use the pointer inside the function, 
// you are directly accessing and modifying the 
// value stored at that memory address.

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap (Call by Reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Call by Reference
    printf("After swap: x = %d, y = %d\n", x, y); // Values of x and y are swapped
    return 0;
}

// Here, x and y are passed by reference, so the changes inside swap
// () affect the original values in the main function.

