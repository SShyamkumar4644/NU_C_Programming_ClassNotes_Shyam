#include <stdio.h>
#include <string.h>  // Include for strcpy function

// Define the Student structure
struct Student {
    char name[25];
    int age;
    char branch[10];
    char gender;  // 'F' for female and 'M' for male
};

int main() {
    struct Student s1;  // Declare a variable 's1' of type struct Student

    // Assign values to s1's members
    s1.age = 18;  // Set the age of s1 to 18
    strcpy(s1.name, "Viraaj");  // Copy "Viraaj" into the name member of s1

    // Display the stored values
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);

    return 0;
}

/*

Structure Definition:

struct Student is defined with members name, 
age, branch, and gender.

Dot Operator Usage:

s1.age = 18; uses the dot operator to assign 
the value 18 to the age member of s1.

strcpy(s1.name, "Viraaj"); uses strcpy to 
assign a string to the name member, as direct 
assignment isn’t allowed for strings.

Output:

printf("Name of Student 1: %s\n", s1.name); prints the name of s1.
printf("Age of Student 1: %d\n", s1.age); prints the age of s1.

*/