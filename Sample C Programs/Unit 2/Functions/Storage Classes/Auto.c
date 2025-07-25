#include <stdio.h>

void autoExample() {
    auto int x = 10; // `auto` is optional for local variables
    printf("Auto storage class: %d\n", x);
}

int main() {
    autoExample();
    return 0;
}
