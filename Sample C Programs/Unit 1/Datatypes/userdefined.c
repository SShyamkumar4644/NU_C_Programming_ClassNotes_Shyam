#include <stdio.h>

// Enumeration for Gender
enum Gender { MALE, FEMALE };

// Structure to represent a Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Create and initialize a struct Person
    struct Person person1 = {"John Doe", 30, MALE};

    // Print the person's details
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    // Print gender as a string
    if (person1.gender == MALE) {
        printf("Gender: Male\n");
    } else {
        printf("Gender: Female\n");
    }

    return 0;
}
