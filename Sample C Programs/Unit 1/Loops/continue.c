#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++) 
    {
        if (i == 5)
        {
            continue; // Skip rest of the loop iteration when i equals 5
        }
        printf("%d ", i);
    }

    return 0;
}
