#include <stdio.h>

int main() {
    char name[20];  // Create an array to store the string

    printf("Enter your name: ");
    scanf("%s", name);  // Reads input until a space or newline is encountered

    // Printing the string
    printf("Your name is: %s\n", name);

    return 0;
}
