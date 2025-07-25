// Accessing the address of variables

/*
In C, every variable is stored in a specific location 
in memory, and each of these locations has a unique 
address. You can access the address of a variable 
using the address operator (&).
*/

#include <stdio.h>

int main() {
    int a = 10;  // Declare variable 'a' and initialize it with 10
    int b = 20;  // Declare variable 'b' and initialize it with 20

    // Accessing the address of variables using the address operator (&)
    printf("Address of a: %p\n", (void*)&a); // Print the address of variable 'a'
    printf("Address of b: %p\n", (void*)&b); // Print the address of variable 'b'

    // Accessing values using dereferencing operator (*) with pointers
    int* ptrA = &a;  // Pointer to the address of 'a'
    int* ptrB = &b;  // Pointer to the address of 'b'

    // Dereferencing the pointers to get the values
    printf("Value of a using pointer: %d\n", *ptrA); // Output the value of 'a' through the pointer
    printf("Value of b using pointer: %d\n", *ptrB); // Output the value of 'b' through the pointer

    return 0;
}

/*
Note: 

Here, both 0061FF14 and 0061FF10 are memory addresses, 
and the difference between them indicates the size of 
the data types stored at those addresses. 
The difference between the two addresses is 4 bytes, 
which corresponds to the size of an int variable in C on many platforms.

*/
