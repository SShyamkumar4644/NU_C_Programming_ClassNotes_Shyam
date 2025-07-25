#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
        printf("%d ", i); // 0 1 2 3 4
        i++; // 1 2 3 4 5
    } while (i < 5);

    return 0;
}
