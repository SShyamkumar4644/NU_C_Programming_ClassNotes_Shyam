#include <stdio.h>

int main() 
{ 
    int x; 
    float y; 
    char ch = 'y'; 
    x = 10; 
    y = 100.0;
    printf("\nSize of x = %zu", sizeof(x));
    printf("\nSize of y = %zu", sizeof(y)); 
    printf("\nSize of ch = %zu", sizeof(ch)); 
    printf("\nSize of double = %zu", sizeof(double));
    return 0; 
}

