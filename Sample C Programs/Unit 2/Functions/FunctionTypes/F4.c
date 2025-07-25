// Function with Arguments and a Return Value

#include <stdio.h>

int multiply(int a, int b) {
    return a * b; // Returns the product of a and b
}

int main() {
    int result = multiply(4, 5); // Arguments passed, function returns a value
    printf("Product: %d\n", result);
    return 0;
}

// The multiply(int a, int b) function takes two arguments and 
// returns their product. The result is stored in the result variable in main().