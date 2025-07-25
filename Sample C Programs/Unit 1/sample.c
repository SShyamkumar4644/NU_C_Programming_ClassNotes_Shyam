// Difference between Definition section and Global Declaration section

#include <stdio.h>

// Definition Section
#define PI 3.14159        // Constant definition using #define
const int MAX_LIMIT = 100; // Constant definition using const

// Global Declaration Section
int counter;  // Global variable declaration

// Function Prototype Declaration Section
void incrementCounter();  // Function prototype

int main() {
    counter = 0;           // Initialize global variable
    printf("Initial counter: %d\n", counter);

    incrementCounter();    // Call the function to increment the counter
    printf("Counter after increment: %d\n", counter);

    printf("Value of PI: %f\n", PI);         // Use the defined constant
    printf("Max limit: %d\n", MAX_LIMIT);    // Use the defined constant

    return 0;
}

// User Defined Function Definition Section
void incrementCounter() {
    counter++;  // Increment the global variable
}
