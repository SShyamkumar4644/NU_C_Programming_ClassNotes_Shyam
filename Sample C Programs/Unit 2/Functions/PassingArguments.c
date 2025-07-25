#include <stdio.h>

// Function declaration with arguments
int add(int, int);

// Function declaration without arguments
void greeting();

int main() {
    // Calling function with arguments
    int result = add(5, 3);  // Passing two numbers (5 and 3) to the function 'add'
    printf("The sum is: %d\n", result);
    
    // Calling function without arguments
    greeting();  // Just calling 'greet' function without passing anything
    
    return 0;
}

// Function definition with arguments
int add(int a, int b) {
    return a + b;  // Adds the two numbers and returns the result
}

// Function definition without arguments
void greeting() {
    printf("Hello! Good Morning.\n");  // Prints a message
}

// 1. With Arguments (add):  
//    - When you call `add(5, 3);`, you pass two numbers (5 and 3) 
//      to the `add` function.  
//    - Inside the function, these numbers are received as 
//      `int a` and `int b`, and it adds them to return the result.

// 2. Without Arguments (greet):  
//    - When you call `greet();`, you don’t pass any values.  
//    - The function simply prints the message 
//      "Hello! Welcome to the program." without needing any input.