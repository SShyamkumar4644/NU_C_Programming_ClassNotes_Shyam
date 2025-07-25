// Age Verification for Voting Eligibility: A Simple C Program

#include <stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You can Vote!");
    else
        printf("You cant Vote!");
    return 0;
}