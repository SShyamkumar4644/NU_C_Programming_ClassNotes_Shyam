// Copying and comparing structured variable

#include <stdio.h>
#include <string.h> // Include for using string functions

// Define a structure for student
struct Student {
    int no;              // Roll number
    char name[20];      // Name of the student
    float marks;        // Marks scored
};

int main() {
    struct Student stu1 = {111, "Rao", 72.50};  // Initialize stu1
    struct Student stu2 = {222, "Reddy", 67.80}; // Initialize stu2
    struct Student stu3;  // Declare stu3

    // Copy values from stu2 to stu3
    stu3 = stu2;  

    // Compare stu3 and stu2
    // Check if both 'no' and 'marks' are the same
    int x = (stu3.no == stu2.no && stu3.marks == stu2.marks) ? 1 : 0;

    // Print the comparison result
    if (x == 1) {
        printf("\nStudent 2 and Student 3 are the same\n");
        printf("%d\t%s\t%.2f\n", stu3.no, stu3.name, stu3.marks);
    } else {
        printf("\nStudent 2 and Student 3 are different\n");
    }

    return 0;
}
