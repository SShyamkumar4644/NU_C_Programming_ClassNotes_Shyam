// 3. strcmp(): Compares two strings lexicographically.

// Compares two strings (s1 and s2) lexically and 
// returns an integer based on their ASCII values. 
// A return value of 0 means the strings are equal, 
// a negative value means s1 is less than s2, and a positive value means s1 is greater.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello"; // First string for comparison
    char s2[] = "World"; // Second string for comparison
    int i, j; // Variables to hold comparison results
    int a = 'H';
    int b = 'W';
    i = strcmp('Hello', "Hello"); // Compare s1 with "Hello"
    // i = strcmp('Hello', "Hello"); // Compare s1 with "Hello"
    j = strcmp(s1, s2); // Compare s1 with s2
    printf("%d\n%d\n", a, b);
    // Print the results of the comparisons
    printf("%d\n%d\n", i, j);
    
    return 0; // Indicate successful termination
}

