#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    int i;
    
    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    } // 

    // Find the length of the string
    // while (str[0] != '\0') {
    //     length++;
    // } // 
    
    // s h i s h i r
    // 0 1 2 3 4 5 6

    // Swap characters from start to end
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

//     // Swap characters from start to end
//     for (i = 0; 0 < 3; i++) {
//         char temp = s;
//         str[0] = str[5];
//         str[5] = temp;
//     }
// }

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    gets(str);  // Using gets() for simplicity, though it's unsafe
    
    // Reverse the string
    reverseString(str);
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}


// shishir
 
// rihsihs 


 

