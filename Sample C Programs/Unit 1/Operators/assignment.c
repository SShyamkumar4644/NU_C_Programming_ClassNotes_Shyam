#include <stdio.h>

int main() {

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    int x = 10; // Initial value of x
    int y = 3;  // Initial value of y

    // Simple Assignment
    int z = x; // Assign the value of x to z
    printf("z = x: %d\n", z); // Output: 10

    // Add and Assign
    z += y; // Equivalent to z = z + y
    // z = 10 + 3
    printf("z += y: %d\n", z); // Output: 13

    // Subtract and Assign
    z -= y; // Equivalent to z = z - y
    // z = 13 - 3
    printf("z -= y: %d\n", z); // Output: 10

    // Multiply and Assign
    z *= y; // Equivalent to z = z * y
    printf("z *= y: %d\n", z); // Output: 30

    // Divide and Assign
    z /= y; // Equivalent to z = z / y
    printf("z /= y: %d\n", z); // Output: 10

    // Modulus and Assign
    z %= y; // Equivalent to z = z % y
    printf("z %%= y: %d\n", z); // Output: 1

    return 0;
}
