// 5. strlen(): Returns the length of a string 
// (excluding the null terminator).

// Calculates the length of a string by counting the number of 
// characters until the null terminator ('\0'). 
// It does not include the null character in the length count.

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Hello"; // Declare and initialize a string
    int len1, len2; // Variables to hold lengths of strings
    
    len1 = strlen(name); // Calculate the length of 'name'
    len2 = strlen("Hello World"); // Calculate the length of a literal string
    
    // Print the lengths of the strings
    printf("Length of %s = %d\n", name, len1);
    printf("Length of %s = %d\n", "Hello World", len2);
    
    return 0; // Indicate successful termination
}

