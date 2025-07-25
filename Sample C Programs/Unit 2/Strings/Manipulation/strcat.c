// 1. strcat(): Appends one string to the end of another.

// Concatenates the second string (s2) to the end of 
// the first string (s1). The destination string must 
// have enough space to hold the resulting concatenated string.

#include <stdio.h>
#include <string.h>

int main() {
    char s2[] = "World"; // Second string to concatenate
    char s1[20] = "Hello"; // First string with enough space for concatenation
    
    strcat(s1, s2); // Concatenate s2 onto the end of s1
    
    // Print the original and modified strings
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    
    return 0; // Indicate successful termination
}

