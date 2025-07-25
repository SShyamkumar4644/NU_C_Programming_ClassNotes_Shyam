#include <stdio.h>

int main() {
    // Constant declaration
    const int MAX_VALUE = 100;  // MAX_VALUE is a constant and cannot be changed
 
    // Variable declaration
    int number; // Declaring a variable 'number' without initializing it

    // Assigning a value to the variable
    number = 50; 

    // Printing the values
    printf("Constant MAX_VALUE: %d\n", MAX_VALUE);
    printf("Variable number: %d\n", number);

    // Attempt to change the value of the constant (will cause a compilation error)
    // MAX_VALUE = 200;  // Uncommenting this line will result in a compiler error

    // Changing the value of the variable
    number = 75;  // This is allowed because 'number' is a variable

    // Printing the new value of the variable
    printf("Updated variable number: %d\n", number);

    return 0;
}
