// Concatenates the first n characters of the second string 
// (s2) to the end of the first string (s1). 
// It ensures that only a specified number of characters are added, preventing overflow

#include <stdio.h>
#include <string.h>

int main() {
    char s2[] = "World"; // Second string
    char s1[20] = "Hello"; // First string with enough space
    
    strncat(s1, s2, 2); // Concatenate the first 2 characters of s2 to s1
    
    // Print the original and modified strings
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    
    return 0; // Indicate successful termination
}

