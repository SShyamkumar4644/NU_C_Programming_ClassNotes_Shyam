#include <stdio.h> 

int main()
{
    int num = 10;    // Declare an integer variable 'num' and initialize it to 10
    int *ptr = &num; // Declare a pointer 'ptr' and assign it the address of 'num'

    // Display the value of 'num' and its address

    // Prints the value of num (which is 10).
    // Output: Value of num: 10
    printf("Value of num: %d\n", num); // Print the value of 'num' (10)

    // Prints the memory address of num.
    // This is where num is stored in memory.
    printf("Address of num: %p\n", (void *)&num); // Print the memory address of 'num'

    // Prints the value of ptr, which is the address of num.
    // This shows that ptr points to num.
    printf("Value of ptr (address of num): %p\n", (void *)ptr); // Print the value of 'ptr' (address of 'num')

    // Prints the value that ptr points to, which is num (still 10).
    // Output: Value pointed by ptr: 10
    printf("Value pointed by ptr: %d\n", *ptr); // Dereference 'ptr' to print the value of 'num' (10)

    // Modify the value of 'num' using the pointer
    *ptr = 20; // Change the value at the address pointed to by 'ptr' to 20

    // Display the updated value of 'num'
    printf("Updated value of num: %d\n", num); // Print the updated value of 'num' (20)

    return 0; 
}
