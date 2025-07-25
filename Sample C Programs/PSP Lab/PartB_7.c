#include <stdio.h> 
#include <stdlib.h> 

struct student {
    char name[100]; 
    int id, marks[6]; 
    float avg; 
};

int main() { 
    struct student s[100]; 
    int i, j, n, sum = 0; 

    printf("Enter the number of students\n"); 
    scanf("%d", &n); 

    printf("PLEASE ENTER %d STUDENT DETAILS\n", n); 
    for (i = 0; i < n; i++) { 
        printf("Enter the details of student %d\n", i + 1); 
        
        printf("Enter the name\n"); 
        scanf("%s", s[i].name); 
        
        printf("Enter the ID\n"); 
        scanf("%d", &s[i].id); 
        
        printf("Enter the marks in 6 subjects\n"); 
        for (j = 0; j < 6; j++) { 
            printf("Subject %d: ", j + 1); 
            scanf("%d", &s[i].marks[j]); 
        } 
        
        sum = 0; 
        for (j = 0; j < 6; j++) {
            sum += s[i].marks[j]; 
        }
        s[i].avg = sum / 6.0; 

        printf("The average marks of student %d is %.2f\n", i + 1, s[i].avg); 

        if (s[i].avg >= 80 && s[i].avg <= 100) {
            printf("Grade: Distinction\n"); 
        } else if (s[i].avg >= 60 && s[i].avg <= 79) {
            printf("Grade: First Class\n"); 
        } else if (s[i].avg >= 40 && s[i].avg <= 59) {
            printf("Grade: Second Class\n"); 
        } else {
            printf("Grade: FAIL\n"); 
        }
    } 

    return 0; 
}
