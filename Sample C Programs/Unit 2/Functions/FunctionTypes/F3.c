// Function with Arguments and No Return Value

#include <stdio.h>

void printSum(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    printSum(5, 10); // Arguments are passed, no return value
    return 0;
}

// The printSum(int a, int b) function takes two integer arguments and 
// prints their sum. It does not return any value.