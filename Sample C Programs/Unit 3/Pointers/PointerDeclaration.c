#include <stdio.h>

int main() {
    // Step 1: Declare a data variable
    int x = 5; // Variable to store an integer

    // Step 2: Declare a pointer variable
    int *p;    // Pointer to an integer

    // Step 3: Initialize the pointer variable
   p  = &x;    // Assign the address of x to the pointer p

    // Step 4: Access data using the pointer variable
    int y = *p; // Retrieve the value at the address stored in p

    // Print the results
    printf("Value of x: %d\n", x);         // Output: 5
    printf("Address of x: %p\n", (void*)&x); // Print address of x
    printf("Value of p (address of x): %p\n", (void*)p); // Print value of p
    printf("Value pointed by p (value of x): %d\n", y); // Output: 5

    return 0;
}

/*

int x = 5;: Here, we declare an integer variable x and 
initialize it with the value 5.

int *p;: We declare a pointer variable p that can 
hold the address of an integer.

p = &x;: We initialize p by assigning it the 
address of x using the & operator.

int y = *p;: We access the value stored at the 
address pointed to by p and assign it to y using the * operator.

*/