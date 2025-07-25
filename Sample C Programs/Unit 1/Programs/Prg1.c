#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check.\n");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Number is negative: %d\n", num);
    }
    else if (num == 0) {
        printf("Number is zero\n");  // Condition for zero
    }
    else {
        printf("Number is positive: %d\n", num);  // Condition for positive numbers
    }
    
    return 0;
}
