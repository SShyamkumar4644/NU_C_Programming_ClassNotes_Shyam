#include <stdio.h>
int main()
{
    double a = 4.5;
    double b = 4.6;
    double c = 4.9;
    int result;
    result = (int)a + (int)b + (int)c; // Explicitly casting double to int
    printf("Result = %d\n", result);
    return 0;
}
