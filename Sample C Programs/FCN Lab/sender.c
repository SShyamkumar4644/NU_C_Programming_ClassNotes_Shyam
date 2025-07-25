#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char frame[] = "Hello, Receiver!";

    fp = fopen("frame.txt", "w");  // Open file to write the frame
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int frame_size = strlen(frame);  // Count the bytes in the frame
    fprintf(fp, "%s", frame);
    printf("Bytes in the frame: %d\n", frame_size);  // Print byte count

    fclose(fp);  // Close the file
    return 0;
}
