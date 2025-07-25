#include <stdio.h>

int main()
{
    int a, b, temp;
    b = (a = 20, 70);
    printf("\nBefore swapping, a = %d & b = %d", a, b);
    temp = a, a = b, b = temp;
    printf("\nAfter swapping, a = %d & b = %d", a, b);
    return 0;
}
