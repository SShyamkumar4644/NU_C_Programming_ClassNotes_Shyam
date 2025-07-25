#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b; // Modular and reusable
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b; // Modular and reusable
}

int main() {
    int num1, num2;
    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations using functions
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));

    return 0; 
}


// 1. Modularity
// - Explanation: The program uses functions (`add` and `subtract`) to encapsulate 
// specific tasks, making it easier to manage and maintain.

// 2. Code Reusability
// - Explanation: Functions can be reused throughout the program. For instance, 
// you can call `add(num1, num2)` or `subtract(num1, num2)` without rewriting the code.

// 3. Easier Debugging
// - Explanation: If an error occurs, you can isolate and test the specific 
// function (e.g., `add`) instead of debugging the entire program.

// 4. Readability
// - Explanation: Function names clearly describe their purpose, 
// making the code self-documenting and easier to understand.

// 5. Time and Space Efficiency
// - Explanation: Functions reduce code redundancy, saving time 
// in coding and space in memory.

// 6. Inter-Program Use
// - Explanation: The defined functions can be easily reused in 
// other programs, promoting code sharing.

