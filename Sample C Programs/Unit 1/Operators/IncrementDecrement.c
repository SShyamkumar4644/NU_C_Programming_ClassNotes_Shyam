#include <stdio.h>

int main() {
    int x = 5;
    int y;

    // Pre-increment
    y = ++x;  // x is incremented to 6, then y is assigned the value of x (6)
    printf("After pre-increment: x = %d, y = %d\n", x, y);

    // Post-increment
    y = x++;  // y is assigned the value of x (6), then x is incremented to 7
    printf("After post-increment: x = %d, y = %d\n", x, y);

    // Pre-decrement
    y = --x;  // x is decremented to 6, then y is assigned the value of x (6)
    printf("After pre-decrement: x = %d, y = %d\n", x, y);

    // Post-decrement
    y = x--;  // y is assigned the value of x (6), then x is decremented to 5
    printf("After post-decrement: x = %d, y = %d\n", x, y);

    return 0;
}
