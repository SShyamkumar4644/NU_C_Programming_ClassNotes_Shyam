#include <stdio.h>

int main()
{
    int num = 10;
    float result;

    // Explicit conversion
    result = (float)num / 4; // Division of two integers, result will be 2 (integer division)

    printf("Result: %f\n", result); // Prints "Result: 2.500000"

    return 0;
}
