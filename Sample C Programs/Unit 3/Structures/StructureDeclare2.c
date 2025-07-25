// Method 2: Declaring Structure Variables with Definition

#include <stdio.h>

struct Student {
    char name[25];
    int age;
    char branch[10];
    char gender;
} S1, S2;  // Declare variables S1 and S2 with the structure definition

int main() {
    S1.age = 20;  // Example usage of S1
    S2.age = 22;  // Example usage of S2
    return 0;
}

/*

Here, S1 and S2 are declared as variables at the 
same time as the structure Student is defined.

Advantage: This approach combines the definition 
and declaration, which can make the code shorter, 
but it is less flexible. For example, if you need 
more variables later, you’ll need to declare them 
separately, as you did in Method 1.

Note: Structure variables are declared with the 
structure definition, making it concise but less 
flexible for adding new variables of the same 
structure later.

*/
