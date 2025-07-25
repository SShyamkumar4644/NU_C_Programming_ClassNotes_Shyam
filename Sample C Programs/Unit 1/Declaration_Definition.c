#include <stdio.h>

// Function declaration (also called function prototype)
int add(int a, int b);

int main() {
    // Variable declaration
    int result;

    // Variable definition and initialization
    result = add(5, 3);  // 'result' is assigned the value returned by 'add'

    // Print the result
    printf("The sum is: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Returns the sum of a and b
}
