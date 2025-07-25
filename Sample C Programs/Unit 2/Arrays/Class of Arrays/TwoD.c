// Two-D Arrays

#include <stdio.h>

int main() {
    int matrix[3][3] = { // Two-dimensional array
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print elements of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// A two-dimensional array can be visualized as a table with rows and columns.