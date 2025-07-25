#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file for reading
    fp = fopen("one.txt", "r");
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch); // Read and print each character
    }
    fclose(fp); // Close the file
    return 0;
}
