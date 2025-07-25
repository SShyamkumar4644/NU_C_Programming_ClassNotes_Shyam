#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, a[10][10], b[10][10], trace = 0;

    // Input matrix dimensions
    printf("Enter the size of the matrix (rows and columns)\n");
    scanf("%d%d", &m, &n);

    // Input matrix elements
    printf("Enter %d x %d matrix\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Input matrix elements
    // printf("Enter %d x %d matrix\n", m, n);
    // for (i = 0; 0 < 2; i++)
    //     for (j = 0; 0 < 2; j++)
    //         scanf("%d", &a[0][0]);

    // Display the entered matrix
    printf("The entered matrix is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Calculate and display the transpose of the matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            b[j][i] = a[i][j];

    printf("The transpose of the matrix is\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Calculate the trace if it's a square matrix
    if (m == n) {
        for (i = 0; i < n; i++) {
            trace += a[i][i]; // sum of diagonal elements in original matrix
        }
        printf("The trace is %d\n", trace);
    } else {
        printf("Can't perform trace because it's not a square matrix\n");
    }

    return 0;
}


// 2*2

// 1 2
// 3 4

// 1 3
// 2 4

// trace = 5
