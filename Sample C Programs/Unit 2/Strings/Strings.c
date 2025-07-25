#include <stdio.h>

int main() {
    // Example 1: Creating a string manually using characters
    char c[4] = {'s', 'u', 'm', '\0'};  // Array of characters with a null character at the end

    // Example 2: Creating a string with double quotes
    char str[16] = "qwerty";  // Automatically adds the null character at the end

    // Example 3: Manually assigning characters to an array
    char name[5];  // Declare a character array
    name[0] = 'G';
    name[1] = 'O'; 
    name[2] = 'O';
    name[3] = 'D';
    name[4] = '\0';  // Null character to mark the end of the string

    // Example 4: String with automatic null character
    char country[6] = "INDIA";  // Null character is added automatically after 'A'

    printf("String 1: %s\n", c);
    printf("String 2: %s\n", str);
    printf("String 3: %s\n", name);
    printf("String 4: %s\n", country);

    return 0;
}


// 1. Manual String Creation:
//    - `char c[4] = {'s', 'u', 'm', '\0'};`  
//      This creates a string `"sum"`. We manually add the null 
//      character `'\0'` to show where the string ends.

// 2. Using Double Quotes:
//    - `char str[16] = "qwerty";`  
//      The string `"qwerty"` is stored in the array. 
//      The null character is automatically added at the end, 
//      and the unused spaces in the array (from `str[7]` to `str[15]`) are undefined.

// 3. Assigning Characters Manually:
//    - In the array `name`, we manually assign characters 
//      `'G'`, `'O'`, `'O'`, `'D'` and then add the null character `'\0'` 
//      at the end to make it a valid string `"GOOD"`.

// 4. Automatic Null Character:
//    - When you assign `"INDIA"` to an array, the null 
//      character is automatically added at the end, making it `"INDIA\0"`.