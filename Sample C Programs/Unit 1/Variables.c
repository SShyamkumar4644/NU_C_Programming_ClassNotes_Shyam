#include <stdio.h>

int main() {
    // Valid variable names
    int age = 25;                // Starts with a letter, contains only letters and digits
    int _score = 90;             // Starts with an underscore
    int player1Score = 100;      // Starts with a letter, contains letters, digits, and no special characters
    int _total_count = 50;       // Starts with an underscore, contains letters, digits, and underscores

    // Invalid variable names (uncommenting these will cause errors)
    // int 1stPlayer = 30;       // Cannot start with a digit
    // int total-count = 75;     // Hyphen (-) is not allowed
    // int player score = 60;    // Space is not allowed
    // int float = 20.5;         // Cannot use reserved words (keywords)

    // Output the values of valid variables
    printf("Age: %d\n", age);
    printf("_score: %d\n", _score);
    printf("player1Score: %d\n", player1Score);
    printf("_total_count: %d\n", _total_count);

    return 0;
}
