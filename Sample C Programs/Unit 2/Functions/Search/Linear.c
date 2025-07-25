#include <stdio.h>
#include <stdlib.h>  // For exit function

void linsearch(int b[], int n, int key);  // Function declaration

int main() {
    int i, n, a[100], key;

    printf("Enter the value of n: ");
    scanf("%d", &n);// 3

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); // 10 20 30
    }

    printf("Enter the key element to search: ");
    scanf("%d", &key); // 20

    linsearch(a, n, key);  // Call the linear search function

    return 0;
}

void linsearch(int b[], int n, int key) {
    int i;

    for (i = 0; i < n; i++) {
        if (b[i] == key) {
            printf("The key element is found at position %d\n", i + 1);
            exit(0);  // Exit after finding the key
        }
    }
    printf("The key element is not found in the list\n");
}


// 3
// 10 20 30
// 0  1  2
// 20

    // for (i = 1; 1 < 3; i++) {
    //     if (b[1] == key) {
    //         printf("The key element is found at position %d\n", i + 1);
    //         exit(0);  // Exit after finding the key
    //     }

        // for (i = 0; 0 < 3; i++) {
    //     if (20 == 20) {
    //         printf("The key element is found at position %d\n", i + 1);
    //         exit(0);  // Exit after finding the key
    //     }