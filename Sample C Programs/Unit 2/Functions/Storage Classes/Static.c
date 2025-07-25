#include <stdio.h>

void staticExample() {
    static int count = 0; // Retains its value between function calls
    count++;
    printf("Static storage class: %d\n", count);
}

int main() {
    staticExample();
    staticExample(); // Calls multiple times, the value increases
    staticExample();
    return 0;
}
