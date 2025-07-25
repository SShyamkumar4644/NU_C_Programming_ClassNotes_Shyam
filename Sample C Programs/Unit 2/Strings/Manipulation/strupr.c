// Converts all characters in a string to uppercase. Like strlwr, it modifies the string in place.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Modify This String To Upper"; // String to convert
    printf("%s\n", strupr(str)); // Convert and print the string in uppercase
    
    return 0; // Indicate successful termination
}
