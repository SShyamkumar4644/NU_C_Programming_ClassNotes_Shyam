#include <stdio.h>
#include <string.h>

// Define the inner structure for Student
struct student {
    char name[50];  // Member for student name
    int class;      // Member for class
    int roll_Number; // Member for roll number
};

// Define the outer structure for School
struct school {
    int numberOfStudents;  // Member for total students
    int numberOfTeachers;  // Member for total teachers
    struct student std;     // Nested structure for student details
};

int main() {
    struct school s;  // Declare a variable of type struct school

    // Access and assign values to the outer structure members
    s.numberOfStudents = 100;
    s.numberOfTeachers = 10;

    // Access and assign values to the nested structure members
    strcpy(s.std.name, "John Smith");
    s.std.class = 10;
    s.std.roll_Number = 1;

    // Print the details
    printf("School Details:\n");
    printf("Number of Students: %d\n", s.numberOfStudents);
    printf("Number of Teachers: %d\n", s.numberOfTeachers);
    printf("Student Name: %s\n", s.std.name);
    printf("Student Class: %d\n", s.std.class);
    printf("Student Roll Number: %d\n", s.std.roll_Number);

    return 0;
}
