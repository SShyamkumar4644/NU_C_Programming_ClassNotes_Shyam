#include <stdio.h>

int main() {
    // Declare an array of integers
    int num[5] = {10, 20, 30, 40, 50}; // Initialize with values

    // Print elements of the array
    printf("Elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }

    // Calculate total size of the array
    int totalSize = sizeof(num); // Size in bytes
    printf("Total size of the array: %d bytes\n", totalSize);
    
    return 0;
}

// Array Declaration:

// int num[5] = {10, 20, 30, 40, 50}; declares an array named num with 5 integers 
// and initializes it with values.

// A loop runs from 0 to 4, printing each element using the index i.

// sizeof(num) calculates the total size of the array in bytes.