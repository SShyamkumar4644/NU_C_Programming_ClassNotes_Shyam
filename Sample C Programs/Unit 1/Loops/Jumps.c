#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++) // 0 1 2 4 5 6
    {
        if (i == 3)
        {
            continue; // Skip the rest of the loop body for i == 3
        }
        if (i == 7)
        {
            goto exit_loop; // Jump to the label 'exit_loop' to break out of the loop
        }
        printf("%d ", i);
    }

exit_loop: // Label to jump to
    printf("\nExited from the loop.\n");

    return 0;
}
