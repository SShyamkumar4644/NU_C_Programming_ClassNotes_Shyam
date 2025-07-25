// 2. strchr(): Finds the first occurrence of a character in a string.

// Finds the first occurrence of a specified character (c) in a string (s1). 
// If found, it returns a pointer to that character; otherwise, it returns NULL.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello Blogsdope"; // String to search in
    char c = 'B'; // Character to find
    char *p; // Pointer to hold the result
    
    p = strchr(s1, c); // Find the first occurrence of 'B' in s1
    printf("%s\n", p); // Print the substring from 'B' to the end
    
    return 0; // Indicate successful termination
}

// 1. `p` holds the memory address of the first occurrence of 'B' in the string.
// 2. `*p` gives the value at that memory address, which is the character 'B'.
// 3. Using `p` prints the substring from 'B' onward, while `*p` prints just 'B'.