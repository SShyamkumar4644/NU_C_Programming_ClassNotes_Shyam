#include <stdio.h>

// Function declaration
int add(int, int);  // 1. return type: int, 2. function name: add, 
// 3. parameter list: int, int, 4. terminating semicolon: ;

int main() {
    int result = add(5, 3);  // Function call
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// Note
// In the function declaration, it's not mandatory to 
// specify the variable names in the parameter list. 
// You only need to provide the data types of the parameters. 
// Specifying variable names is optional in the declaration, 
// but they must be provided in the function definition.