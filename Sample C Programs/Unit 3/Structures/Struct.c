#include <stdio.h>
#include <string.h>  // Include string.h for strcpy

// Define a structure for student data
struct Student {
    char name[50];     // Member to store name
    int age;           // Member to store age
    char address[100]; // Member to store address
    int id;            // Member to store ID
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // struct Student student1 = {"Alice", 20, "123 Main St, City", 12345};

    // // Assign values to student1
    student1.age = 20;
    student1.id = 12345;
    // student1.name = "Alice";
    strcpy(student1.name, "Alice");           // Assigning name
    strcpy(student1.address, "123 Main St, City"); // Assigning address

    // Print the student information
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Address: %s\n", student1.address);
    printf("ID: %d\n", student1.id);

    return 0;
}


/*

DOT OPERATOR:

The dot operator (.) in C is used to access members (fields) 
of a structure through a structure variable. When you have 
a structure variable, you use the dot operator to access 
each specific member within that structure.

STRCPY:

In C, strcpy is necessary for copying strings into 
character arrays because assigning strings directly 
(like student1.name = "Alice";) doesn’t work with arrays.

When you define char name[50]; in a struct, name is an array, 
not a single variable. In C, arrays cannot be assigned 
values directly after they’re declared.
Writing student1.name = "Alice"; would produce an 
error because you’re trying to assign a whole 
string to an array, which is not allowed.

strcpy(destination, source); is a function that copies 
each character from the source string into the 
destination array until it hits the null terminator \0 (end of string).

DECLARATION:

struct Student:

This part refers to the structure type that we defined earlier. 
By writing struct Student, we are telling the compiler that we 
want to create a variable based on the structure template we defined.
struct Student is like a "blueprint" for a student, which 
includes all the fields (name, age, address, id) a student 
should have.

student1:

This is the name of the variable we're creating, 
based on the struct Student template.
By writing student1, we're creating a specific 
instance of struct Student. This means student1 
will have all the fields defined in 
struct Student (name, age, address, id) and 
will hold actual values for one student.

*/