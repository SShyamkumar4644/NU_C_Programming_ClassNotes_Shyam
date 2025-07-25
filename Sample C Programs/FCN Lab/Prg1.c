#include <stdio.h>
#include <string.h>

#define MAX_FRAME_SIZE 100

// Sender module: Counts the number of bytes in the frame
void sender(const char *frame) {
    int frame_length = strlen(frame); // Counting the number of bytes in the frame
    printf("Sender: Frame '%s' contains %d bytes.\n", frame, frame_length);
}

// Receiver module: Displays each frame received
void receiver(const char *frame) {
    printf("Receiver: Received frame: '%s'\n", frame);
}

int main() {
    // Example predefined frame to send
    const char *frame = "hello";

    // Call sender to count bytes
    sender(frame);

    // Call receiver to display the frame
    receiver(frame);

    return 0;
}
