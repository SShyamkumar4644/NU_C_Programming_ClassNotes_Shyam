#include <stdio.h>

struct emp {
    char name[10];
    int age;
};

int main() {
    struct emp e;
    FILE *fp;

    // Open file for reading
    fp = fopen("employee.txt", "r");
    while (fscanf(fp, "%s %d", e.name, &e.age) != EOF) {
        printf("Name: %s, Age: %d\n", e.name, e.age); // Read and print data
    }
    fclose(fp); // Close the file
    return 0;
}
