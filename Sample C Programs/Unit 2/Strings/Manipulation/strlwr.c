// 6. strlwr(): Converts all characters in a string to lowercase.

// Converts all characters in a string to lowercase. This function processes the string in place, 
// meaning it alters the original string directly.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "MODIFY This String To LOwer"; // String to convert
    printf("%s\n", strlwr(str)); // Convert and print the string in lowercase
    
    return 0; // Indicate successful termination
}

