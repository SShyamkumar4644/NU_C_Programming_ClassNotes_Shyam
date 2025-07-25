#include <stdio.h>

int main() {
    FILE *fp;
    int num;

    // Step 1: Create and write to a file using fopen() and fprintf()
    fp = fopen("data.txt", "w"); // Open a file for writing
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "%d\n", 42); // Write an integer to the file
    fprintf(fp, "%d\n", 24); // Write another integer
    fclose(fp); // Close the file

    // Step 2: Open the file again to read data using fopen() and fscanf()
    fp = fopen("data.txt", "r"); // Open a file for reading
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the first integer from the file using fscanf()
    fscanf(fp, "%d", &num); 
    printf("First number read: %d\n", num); // Output the first number

    // Step 3: Use getc() to read a character from the file
    char ch = getc(fp); // Read the next character (newline)
    printf("Next character read (should be a newline): '%c'\n", ch);

    // Read the second integer from the file using fscanf()
    fscanf(fp, "%d", &num);
    printf("Second number read: %d\n", num); // Output the second number

    // Step 4: Demonstrate fseek(), ftell(), and rewind()
    fseek(fp, 0, SEEK_END); // Move to the end of the file
    long position = ftell(fp); // Get the current position
    printf("Current position in the file: %ld\n", position); // Output position

    rewind(fp); // Move back to the beginning of the file
    printf("File pointer moved back to the beginning.\n");

    // Step 5: Read numbers again using getw() (deprecated, but shown for learning)
    printf("Reading numbers again using getw():\n");
    while (fscanf(fp, "%d", &num) != EOF) { // Read until EOF
        printf("%d\n", num); // Print the number read
    }

    fclose(fp); // Close the file at the end
    return 0;
}
