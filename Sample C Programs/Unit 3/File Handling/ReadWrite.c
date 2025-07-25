#include <stdio.h>

int main() {
    FILE *filePointer;
    char str1[20], str2[20], str3[20];
    int year;

    // Open the file for writing
    filePointer = fopen("output.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file for writing.\n");
        return 1; // Exit if file opening fails
    }

    // Write data to the file
    fprintf(filePointer, "%s %s %s %d\n", "We", "are", "in", 2023);
    
    // Close the file after writing
    fclose(filePointer);

    // Open the file for reading
    filePointer = fopen("output.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file for reading.\n");
        return 1; // Exit if file opening fails
    }

    // Read data from the file
    fscanf(filePointer, "%s %s %s %d", str1, str2, str3, &year);
    
    // Print the read values
    printf("Read from file: %s %s %s %d\n", str1, str2, str3, year);

    // Close the file after reading
    fclose(filePointer);
    return 0;
}
