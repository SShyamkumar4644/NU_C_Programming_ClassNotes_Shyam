#include <stdio.h>
int main()
{
    int a, b, min, max;
    printf("\n Enter two integer numbers :");
    scanf("%d %d", &a, &b);
    printf("\na = %d b = %d", a, b);
    max = a > b ? a : b;
    min = a < b ? a : b;
    printf("\n Maximum of a and b is %d", max);
    printf("\n Minimum of a and b is %d", min);
    return 0;
}
