#include <stdio.h>

int main() {
    FILE *fp; // Declare a file pointer
    int num = 10;

    // Open the file for writing
    fp = fopen("example.txt", "w"); // Create or open example.txt for writing
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1; // Exit if the file cannot be opened
    }
    
    fprintf(fp, "%d\n", num); // Write the number to the file
    fclose(fp); // Close the file

    // Reopen the file for reading
    fp = fopen("example.txt", "r"); // Open example.txt for reading
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1; // Exit if the file cannot be opened
    }
    
    fscanf(fp, "%d", &num); // Read the number from the file
    printf("Number read from file: %d\n", num); // Print the number
    fclose(fp); // Close the file

    return 0; // End of the program
}
