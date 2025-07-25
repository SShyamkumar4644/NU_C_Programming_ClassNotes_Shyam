#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check.\n");
    scanf("%d", &num);
    if (num < 0) {
        printf("Number is negative=%d\n", num);
    }
    else {
        printf("Number is positive or zero\n");  // Fixed printf and removed extra argument
    }
    return 0; 
}
