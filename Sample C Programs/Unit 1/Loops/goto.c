#include <stdio.h>

int main()
{
    int num = 15;

    if (num == 5)
    {
        goto skip; // Jump to the label 'skip'
    }

    printf("This line is skipped.\n");

skip:
    printf("This line is executed.\n");

    return 0;
}
