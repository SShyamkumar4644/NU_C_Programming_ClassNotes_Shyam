#include <stdio.h>

void registerExample() {
    register int x = 5; // Try to store in CPU register
    printf("Register storage class: %d\n", x);
}

int main() {
    registerExample();
    return 0;
}
