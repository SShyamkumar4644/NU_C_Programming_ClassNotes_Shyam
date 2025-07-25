// The fullInit array is explicitly initialized with each value in a 
// structured format.

// The compactInit array is initialized similarly but uses fewer braces.

// The implicitInit array provides all values in one set of braces, and 
// the compiler arranges them into rows.

#include <stdio.h>

int main() {
    // Full initialization
    int fullInit[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // Compact initialization
    int compactInit[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // Implicit initialization
    int implicitInit[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Print the full initialized array
    printf("Full Initialization:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", fullInit[i][j]);
        }
        printf("\n");
    }

    // Print the compactly initialized array
    printf("\nCompact Initialization:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", compactInit[i][j]);
        }
        printf("\n");
    }

    // Print the implicitly initialized array
    printf("\nImplicit Initialization:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", implicitInit[i][j]);
        }
        printf("\n");
    }

    return 0;
}
