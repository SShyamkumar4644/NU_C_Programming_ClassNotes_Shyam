// 4. strcpy(): Copies one string into another.

// Copies the content of the second string (s2) into the first string (s1). 
// The destination string must be large enough to hold the copied string, 
// including the null terminator.

#include <stdio.h>
#include <string.h>

int main() {
    char s2[] = "Hello"; // Source string to copy
    char s1[10]; // Destination string (make sure it has enough space)
    
    strcpy(s1, s2); // Copy s2 into s1
    
    // Print the original and copied strings
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    
    return 0; // Indicate successful termination
}

