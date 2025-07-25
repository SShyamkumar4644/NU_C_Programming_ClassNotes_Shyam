// Copies the first n characters of the second string (s2) 
// into the first string (s1). If s2 is shorter than n, 
// the rest of s1 must be null-terminated manually.

#include <stdio.h>
#include <string.h>

int main() {
    char s2[] = "Hello"; // Source string to copy from
    char s1[10]; // Destination string
    
    strncpy(s1, s2, 2); // Copy the first 2 characters of s2 to s1
    s1[2] = '\0'; // Manually add null terminator to prevent garbage values
    
    // Print the original and modified strings
    printf("Source string = %s\n", s2);
    printf("Target string = %s\n", s1);
    
    return 0; // Indicate successful termination
}

// strncpy doesn’t always add a null terminator automatically 
// if the number of characters copied (n) is less than the 
// length of the source string (s2). In this case, since 
// only the first 2 characters are copied, you need to 
// manually add the '\0' at the end of s1 to avoid printing 
// extra garbage characters that might be in the uninitialized 
// parts of s1
