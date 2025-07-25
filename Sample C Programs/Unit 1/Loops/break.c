#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++) // 0 1 2 3 4
    {
        if (i == 5)
        {
            break; // Exit the loop when i equals 5
        }
        printf("%d ", i);
    }

    return 0;
}
