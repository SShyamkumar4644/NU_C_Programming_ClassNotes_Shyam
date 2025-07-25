// Method 1: Declaring Structure Variables Separately

#include <stdio.h>

struct Student {
    char name[25];
    int age;
    char branch[10];
    char gender;  // 'F' for female and 'M' for male
};

// Declare structure variables separately
struct Student S1, S2;

// Declares two variables, S1 and S2, of type 
// struct Student. These will hold information 
// for two different students.

int main() {
    S1.age = 20;  // Example usage of S1
    S2.age = 22;  // Example usage of S2
    return 0;
}

/* 

In this approach, the structure Student is first 
defined without declaring any variables.

S1 and S2 are then declared as variables of 
type struct Student after the structure definition. 
This keeps the structure definition separate 
from the variable declarations.

Advantage: This method is more flexible and 
commonly used since it allows you to declare 
additional variables of the same structure 
type in different parts of the program.

Note: Structure variables are declared after 
the structure definition, allowing for 
future declarations elsewhere in the program.

*/
