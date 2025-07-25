// Predefined function
#include <stdio.h>
int main() {
    printf("Hello, World!\n");  // Predefined function
    return 0;
}

// User-defined
#include <stdio.h>
// User-defined function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);  // Calling user-defined function
    printf("The sum is: %d\n", result);
    return 0;
}

