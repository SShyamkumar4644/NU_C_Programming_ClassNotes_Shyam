// 1. Documentation Section
// Program to print "Hello, World!"
// Author: Your Name
// Date: Today's Date

#include <stdio.h>  // 2. Link Section: Include the standard I/O library

// 3. Definition Section
#define GREETING "Hello, World!"  // Define a constant for the greeting message

// 4. Global Declaration Section
int counter;  // Declare a global variable (not used in this simple example)

// 5. Function Prototype Declaration Section
void printGreeting();  // Declare a function prototype

// 6. Main Function: The starting point of the program
int main() {
    printGreeting();  // Call the function to print the greeting message
    return 0;  // End of the program
}

// 7. User Defined Function Definition Section
void printGreeting() {
    printf("%s\n", GREETING);  // Print the greeting message
}


// Explanation:

// 1. The Documentation Section includes comments about what the program does, who wrote it, and the date.

// 2. The Link Section includes `#include <stdio.h>` to bring in the standard I/O functions.

// 3. The Definition Section uses `#define GREETING "Hello, World!"` to define a constant string for use in the program.

// 4. The Global Declaration Section shows `int counter;`, a global variable declared but not used in this example.

// 5. The Function Prototype Declaration Section declares `void printGreeting();`, which will be defined later.

// 6. The Main Function starts with `int main()`, where `printGreeting()` is called to execute its code, and the program ends with `return 0;`.

// 7. The User Defined Function Definition Section provides the implementation of `void printGreeting()`, which prints the greeting message using `printf`.