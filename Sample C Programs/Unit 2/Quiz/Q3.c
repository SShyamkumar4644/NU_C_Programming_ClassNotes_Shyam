#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello";
    printf("%c\n", strlen(str));
    return 0;
}

// In C, the null character `'\0'` (which marks the end of a string) 
// takes up 1 byte of memory. This means that when you declare a string,
// the length of the string includes this null character. For example:

// char str[] = "Hello";

// The string `"Hello"` consists of 5 characters 
// (`H`, `e`, `l`, `l`, `o`), but in memory, it actually 
// occupies 6 bytes: 5 bytes for the characters and 
// 1 byte for the null character `'\0'` at the end.

