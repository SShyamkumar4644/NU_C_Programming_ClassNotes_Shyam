#include <stdio.h>

int main()
{
    char c = 'A';             // Character
    int d = 123;              // Decimal integer
    float f = 1.23f;          // Float
    double g = 4.56;          // Double
    short h = 10;             // Short integer
    int i = 0x1F;             // Hexadecimal integer
    unsigned int u = 250;     // Unsigned integer
    unsigned int o = 0123;    // Octal number
    unsigned int x = 0xABC;   // Hexadecimal number
    void *p = (void *)0x1234; // Pointer
    char s[] = "World";       // String

    // Display values using printf
    printf("Character: %c\n", c);           // %c
    printf("Decimal integer: %d\n", d);     // %d
    printf("Float: %f\n", f);               // %f
    printf("Double: %lf\n", g);             // %lf (or %g for either float or double)
    printf("Short integer: %hd\n", h);      // %hd
    printf("Hexadecimal integer: %i\n", i); // %i (or %x for hexadecimal)
    printf("Unsigned integer: %u\n", u);    // %u
    printf("Octal number: %o\n", o);        // %o
    printf("Hexadecimal number: %x\n", x);  // %x
    printf("Pointer address: %p\n", p);     // %p
    printf("String: %s\n", s);              // %s

    return 0;
}
