#include <stdio.h>

int main()
{
    int num = 10;
    float result;

    // Implicit conversion
    result = num / 4; // Division of two integers, result will be 2 (integer division)
// 10/4=2.000
    printf("Result: %f\n", result); // Prints "Result: 2.000000"

    return 0;
}
