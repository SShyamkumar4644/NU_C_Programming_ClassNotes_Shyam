// Finds the last occurrence of a specified character (c) in a string (s1). 
// Similar to strchr, it returns a pointer to the last occurrence or NULL if not found

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello Blogsdope"; // String to search in
    char c = 'o'; // Character to find
    char *p; // Pointer to hold the result

    p = strrchr(s1, c); // Find the last occurrence of 'o' in s1
    printf("%s\n", p); // Print the substring from 'o' to the end
    
    return 0; // Indicate successful termination
}
