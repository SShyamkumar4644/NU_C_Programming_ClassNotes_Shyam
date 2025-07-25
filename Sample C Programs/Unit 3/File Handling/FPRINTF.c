#include <stdio.h>

struct emp {
    char name[10];
    int age;
};

int main() {
    struct emp e;
    FILE *fp;

    // Open file for writing
    fp = fopen("employee.txt", "w");
    printf("Enter Name and Age:\n");
    scanf("%s %d", e.name, &e.age);
    fprintf(fp, "%s %d", e.name, e.age); // Write data
    fclose(fp); // Close the file
    return 0;
}
