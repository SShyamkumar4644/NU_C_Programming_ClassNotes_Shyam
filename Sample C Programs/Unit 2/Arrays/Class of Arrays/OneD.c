// One-D Arrays

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; // One-dimensional array

    // Print elements of the array
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

// A one-dimensional array is a linear array that consists 
// of a single row or column of elements. 
// It is accessed using a single subscript.