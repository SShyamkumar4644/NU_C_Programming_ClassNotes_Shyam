#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file for writing
    fp = fopen("one.txt", "w");
    printf("Enter data (Ctrl+Z to end):\n");
    while ((ch = getchar()) != EOF) {
        putc(ch, fp); // Write each character to the file
    }
    fclose(fp); // Close the file
    return 0;
}
