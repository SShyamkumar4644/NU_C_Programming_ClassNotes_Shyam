// Function with No Arguments and a Return Value

#include <stdio.h>

int getRandomNumber() {
    return 42; // Returns a random number
}

int main() {
    int num = getRandomNumber(); // Function returns an integer
    printf("Random Number: %d\n", num);
    return 0;
}

// The getRandomNumber() function has no parameters but returns an integer value. 
// In the main() function, 
// we store the returned value in the variable num