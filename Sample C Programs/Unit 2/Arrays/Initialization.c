#include <stdio.h>

int main()
{
    // Initializing all specified memory locations
    int num[5] = {10, 15, 20, 25, 30};

    // Print elements of the array
    printf("Elements of the array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
    }

    // Partial initialization example
    int partial[5] = {10, 20}; // num[2], num[3], num[4] will be 0
    printf("\nPartial initialization:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("partial[%d] = %d\n", i, partial[i]);
    }

    // String initialization example
    char name[] = "Alice"; // Automatically includes '\0'
    printf("\nString initialization:\n");
    printf("name = %s\n", name);
    for (int i = 0; i < 5; i++)
    {
        printf("name[%d] = %c\n", i, name[i]);
    }
 // A l i c e 
 // 0 1 2 3 4
    return 0;
}

// Array Initialization:

// int num[5] = {10, 15, 20, 25, 30}; initializes an array with 5 integers.

// int partial[5] = {10, 20}; initializes the first two elements, while the rest default to 0.

// char name[] = "Alice"; initializes a character array with a string.