#include <stdio.h>

int main()
{
    // Define an array of integers with 5 elements
    int a[5] = {10, 20, 30, 40, 50};
    
    // Print the elements of the array using their indices
    printf("Array elements:\n");
    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n", a[2]);
    printf("a[3] = %d\n", a[3]);
    printf("a[4] = %d\n", a[4]);

    return 0;
}

// Definition of an Array: An array is a collection of elements of the same type, 
// identified by a common name. 

// The elements are stored in contiguous memory locations.

// An array is defined using a data type followed by the array name 
// and size in square brackets.

// Array indexing starts from 0. For an array of size n, 
// valid indices are from 0 to n-1.