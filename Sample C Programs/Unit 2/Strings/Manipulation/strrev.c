// Reverses the characters in a string (s1). 
// This function modifies the original string, returning the reversed version.

#include <stdio.h>
#include <string.h>

int main() {
    char name[30] = "Hello"; // String to reverse
    printf("String before strrev(): %s\n", name); // Print original string
    printf("String after strrev(): %s", strrev(name)); // Reverse and print the string
    
    return 0; // Indicate successful termination
}

