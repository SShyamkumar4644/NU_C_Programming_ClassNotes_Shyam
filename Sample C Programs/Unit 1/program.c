#include <stdio.h>  // Link Section: Include the standard I/O library

// Function prototypes
void printMessage();   // Example of a function prototype
int add(int a, int b); // Example of a function prototype

int main() {
    // Variables with different data types
    int num1 = 5;        // Integer data type
    float num2 = 3.2;    // Floating-point data type
    char letter = 'A';   // Character data type
    
    // Call a function
    printMessage();  // Example of a top-down approach

    // Call a function that returns a value
    int sum = add(num1, 10); // Using the add function
    printf("The sum of %d and 10 is: %d\n", num1, sum);  // Using a built-in function

    // Using a pointer
    int *ptr = &num1; // Pointer to an integer
    printf("The value of num1 using pointer is: %d\n", *ptr); // Dereference the pointer
    
    return 0;  // End of the program
}

// Function definitions
void printMessage() {
    printf("Hello, World!\n");  // Print a message
}

int add(int a, int b) {
    return a + b;  // Return the sum of two integers
}

// NOTES:


// #include <stdio.h>  // Link Section: Include the standard I/O library

// - Purpose: This line tells the compiler to include the Standard Input Output library, which provides functions like `printf` for output and `scanf` for input.


// // Function prototypes
// void printMessage();   // Example of a function prototype
// int add(int a, int b); // Example of a function prototype

// - Purpose: These lines declare the functions `printMessage` and `add` before they are defined. This tells the compiler about the functions’ names, return types, and parameters so it can use them in `main`.


// int main() {
//     // Variables with different data types
//     int num1 = 5;        // Integer data type
//     float num2 = 3.2;    // Floating-point data type
//     char letter = 'A';   // Character data type

// - Purpose: The `main` function is the entry point of the program. Inside it, three variables are declared:
//   - `num1` (integer type) initialized to `5`.
//   - `num2` (floating-point type) initialized to `3.2`.
//   - `letter` (character type) initialized to `'A'`.


//     // Call a function
//     printMessage();  // Example of a top-down approach

// - Purpose: This line calls the `printMessage` function. It demonstrates the top-down approach where you first call functions to perform specific tasks.


//     // Call a function that returns a value
//     int sum = add(num1, 10); // Using the add function
//     printf("The sum of %d and 10 is: %d\n", num1, sum);  // Using a built-in function

// - Purpose: 
//   - `int sum = add(num1, 10);`: Calls the `add` function with `num1` and `10` as arguments, and stores the result in `sum`.
//   - `printf("The sum of %d and 10 is: %d\n", num1, sum);`: Uses the `printf` function to print the result to the console. `%d` is a placeholder for integers.


//     // Using a pointer
//     int *ptr = &num1; // Pointer to an integer
//     printf("The value of num1 using pointer is: %d\n", *ptr); // Dereference the pointer

// - Purpose:
//   - `int *ptr = &num1;`: Declares a pointer `ptr` that stores the address of `num1`.
//   - `printf("The value of num1 using pointer is: %d\n", *ptr);`: Dereferences `ptr` (using `*ptr`) to get the value stored at the address `ptr` points to, which is `num1`. This prints the value of `num1`.

//     return 0;  // End of the program
// }

// - Purpose: `return 0;` indicates that the `main` function has completed successfully and returns a value of `0` to the operating system.


// // Function definitions
// void printMessage() {
//     printf("Hello, World!\n");  // Print a message
// }

// - Purpose: Defines the `printMessage` function, which prints "Hello, World!" to the console using `printf`.


// int add(int a, int b) {
//     return a + b;  // Return the sum of two integers
// }
// ```
// - Purpose: Defines the `add` function, which takes two integer parameters `a` and `b`, adds them together, and returns the result.

