#include <stdio.h>

int main() {
    // Declare and initialize an array of integers with 5 elements
    int a[5] = {10, 20, 30, 40, 50};

    // Print the elements of the array using their indices
    printf("Array elements:\n");
    printf("a[0] (First element) = %d\n", a[0]);
    printf("a[1] (Second element) = %d\n", a[1]);
    printf("a[2] (Third element) = %d\n", a[2]);
    printf("a[3] (Fourth element) = %d\n", a[3]);
    printf("a[4] (Fifth element) = %d\n", a[4]);

    // Generalized access to elements
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
