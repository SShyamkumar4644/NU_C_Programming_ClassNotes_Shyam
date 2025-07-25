// The first line is called the function header, 
// which includes the return type, function name, and parameter list.

// The statements within the curly braces are known as the function body, 
// where the actual logic of the function is written.

#include <stdio.h>

// Function definition
int add(int a, int b) { // Function header
    // Function body
    return a + b; // Logic to add two numbers
}

int main() {
    int num1, num2, result;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = add(num1, num2); // Calling the function

    // Display the result
    printf("Addition: %d + %d = %d\n", num1, num2, result);

    return 0; // Indicate successful completion
}
