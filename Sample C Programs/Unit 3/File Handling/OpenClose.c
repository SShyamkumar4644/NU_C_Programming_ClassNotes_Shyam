#include <stdio.h>

int main() {
    // Open a file for writing
    FILE *fp = fopen("sample.txt", "w");
    if (fp == NULL) { // Check if the file was opened successfully
        printf("Error opening file.\n");
        return 1; // Exit if file opening fails
    }

    // Write to the file
    fprintf(fp, "Hello, World!\n"); // Write a string to the file

    // Close the file
    if (fclose(fp) == 0) {
        printf("File closed successfully.\n");
    } else {
        printf("Error closing file.\n");
    }

    return 0;
}
