// Compares the first n characters of two strings (s1 and s2). 
// It is useful for comparing portions of strings without reading the entire length.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello"; // First string for comparison
    char s2[] = "World"; // Second string for comparison
    int i; // Variable to hold comparison result
    
    i = strncmp(s1, "He BlogsDope", 2); // Compare the first 2 characters of s1 with "He BlogsDope"
    printf("%d\n", i); // Print the comparison result
    
    return 0; // Indicate successful termination
}

