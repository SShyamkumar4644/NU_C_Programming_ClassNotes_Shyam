// Call by Value: Only a copy is passed; the original variable remains unchanged.

// In Call by Value, the actual value of the argument is copied to the function's 
// formal parameter. Any changes made inside the function do not affect the 
// actual argument.

#include <stdio.h>

void swap(int a, int b) {
    int temp = a;  // a = 10, b = 20 , temp = 10
    a = b; // a = 20
    b = temp; // b = 10
    printf("Inside swap (Call by Value): a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y); // Call by Value
    printf("After swap: x = %d, y = %d\n", x, y); // Values of x and y remain unchanged
    return 0;
}

 // Here, x and y are passed by value, so the changes inside swap() 
 // do not reflect in the main function.