// File 1: externExample1.c
#include <stdio.h>

extern int x; // Declares that x is defined in another file

void externExample() {
    printf("Extern storage class: %d\n", x);
}

int main() {
    externExample();
    return 0;
}
