#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "hello";
    char str2[] = "world";
    if(strcmp(str1, str2) == 0) {
        printf("Same");
    } else {
        printf("Different");
    }
    return 0;
}

