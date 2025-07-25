// 1. Function Declaration:
//    - This tells the compiler that a function exists, what it's called, 
// what kind of value it will return, and what kind of input it takes. 
// It’s like saying, "Hey, there’s a function called `add` coming up."

// 2. Function Definition:
//    - This is where you actually write what the function does. 
// For example, if it's supposed to add two numbers, this is where 
// you explain how it will do that.

// 3. Function Call:
//    - This is when you use the function in your program. 
// It’s like saying, “Now, do the addition” — the program pauses 
// what it’s doing, runs the function, and then continues.

#include <stdio.h>
// Function declaration
int add(int a, int b); // Declaration

// Function definition
int add(int a, int b) { // Definition
    return a + b; // Logic to add two numbers
}
int main() {
    int num1, num2, result;
    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2); // 2 3
    // Function call
    result = add(num1, num2); // Calling the function

    // Display the result
    printf("Addition: %d + %d = %d\n", num1, num2, result);

    return 0; // Indicate successful completion
}


