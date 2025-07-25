// Recursion is a programming concept where a function calls itself in order to solve 
// smaller instances of the same problem until a base case 
// (a stopping condition) is met.

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call //  5 * factorial(4)
    }
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative integers.\n");
    } else {
        printf("Factorial of %d = %d\n", number, factorial(number));
    }

    return 0;
}
