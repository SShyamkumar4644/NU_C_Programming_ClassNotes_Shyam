#include <stdio.h>

int main()
{

    char c = 'X';                 // %c: Character
    int d = 42;                   // %d: Decimal integer
    float f = 3.14f;              // %f: Floating point number
    double g = 2.718;             // %g: Floating point number (double)
    short h = 12;                 // %h: Short integer
    int i = 0x2A;                 // %i: Hexadecimal integer
    unsigned int u = 300000;      // %u: Unsigned integer
    unsigned int o = 0123;        // %o: Octal number
    unsigned int x = 0xABCD;      // %x: Hexadecimal number
    void *p = (void *)0xDEADBEEF; // %p: Pointer
    char s[] = "Hello";           // %s: String

    // Display values using printf
    printf("Character: %c\n", c);
    printf("Decimal integer: %d\n", d);
    printf("Float: %f\n", f);
    printf("Double: %g\n", g); // %g can be used for both float and double
    printf("Short integer: %hd\n", h);
    printf("Decimal or hexadecimal integer: %i\n", i);
    printf("Unsigned integer: %u\n", u);
    printf("Octal number: %o\n", o);
    printf("Hexadecimal number: %x\n", x);
    printf("Pointer address: %p\n", p);
    printf("String: %s\n", s);

    return 0;
}
