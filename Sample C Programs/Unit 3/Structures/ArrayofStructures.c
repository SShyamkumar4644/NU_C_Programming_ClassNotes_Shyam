#include <stdio.h>

// Define the structure for a student
struct student {
    int rollno;        // Roll number of the student
    char name[25];     // Name of the student
    int totalmark;     // Total marks of the student
};

int main() {
    struct student stud[100];  // Declare an array of 100 students
    int n, i;

    // Input the total number of students
    printf("Enter total number of students: ");
    scanf("%d", &n);

    // Input details for each student
    for(i = 0; i < n; i++) {
        printf("Enter details of %d-th student\n", i + 1);
        
        printf("Name: ");
        scanf("%s", stud[i].name);  // Input name
        
        printf("Roll number: ");
        scanf("%d", &stud[i].rollno);  // Input roll number
        
        printf("Total mark: ");
        scanf("%d", &stud[i].totalmark);  // Input total marks
    }

    // Display the details of each student
    printf("STUDENTS DETAILS:\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll number: %d\n", stud[i].rollno);  // Display roll number
        printf("Name: %s\n", stud[i].name);  // Display name
        printf("Total mark: %d\n", stud[i].totalmark);  // Display total marks
    }

    return 0;  // Indicate successful completion
}
