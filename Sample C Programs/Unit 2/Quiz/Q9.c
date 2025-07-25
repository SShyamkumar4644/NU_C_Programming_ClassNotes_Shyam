#include <stdio.h>

int main() {
    int arr[4] = {2, 4, 6, 8};

    // Print the values and memory addresses of the valid elements
    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %d, Address = %p\n", i, arr[i], (void*)&arr[i]);
    }

    // Access arr[4] (out-of-bounds)
    printf("Value at arr[4] (out-of-bounds) = %d\n", arr[4]);
    printf("Address of arr[4] = %p\n", (void*)&arr[4]);

    return 0;
}