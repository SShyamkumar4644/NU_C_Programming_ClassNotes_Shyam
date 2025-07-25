#include <stdio.h>

// Function Prototype Declaration
void greet();  // Declares the greet function

int main() {      
    int age = 25;  // Declares an integer variable and assigns it a value

    printf("Hello, World!\n");  // Prints a string to the console
    printf("Age: %d\n", age);   // Prints the value of age

    greet();   // Calls the greet function

    return 0;  // Ends the program with a status code
}

// Function definition
void greet() {
    printf("Welcome to C programming!\n");  // Prints a welcome message
}
