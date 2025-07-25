#include <stdio.h>

int main() {
    FILE *fp;
    char frame[100];

    fp = fopen("frame.txt", "r");  // Open file to read the frame
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fscanf(fp, "%s", frame);  // Read the frame from the file
    printf("Frame received: %s\n", frame);  // Display the received frame

    fclose(fp);  // Close the file
    return 0;
}
