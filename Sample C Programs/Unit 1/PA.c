#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, result;

    result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result 1: %d\n", result); // Output: 20

    result = (a + b) * c; // Parentheses change precedence
    printf("Result 2: %d\n", result); // Output: 30

    result = a * b / c; // Subtraction and addition have the same precedence, but associativity is left to right
    printf("Result 3: %d\n", result); // Output: 7

    return 0;
}
