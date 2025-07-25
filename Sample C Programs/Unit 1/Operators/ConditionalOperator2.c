/*** THE USE OF CONDITIONAL OPERATOR ***/
#include <stdio.h>
int main()
{
    int a, b, min, max;
    printf("Enter two integer numbers:");
    scanf("%d %d", &a, &b);
    printf("a = %d b = %d", a, b);
    max = a > b ? a : b;
    min = a < b ? a : b;
    printf("\nMaximum of a and b is %d", max);
    printf("\nMinimum of a and b is %d", min);
    return 0;
}
