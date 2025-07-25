#include <stdio.h>

int main() {
    int a, b, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Conditional operator to find the maximum number
    max = (a > b) ? a : b;

    // Output the result
    printf("The maximum number is: %d\n", max);

    return 0;
}
