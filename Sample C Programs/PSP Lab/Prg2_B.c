/*
Write a C program to input N integer numbers into a single dimension 
array, sort them in to ascending order using selection sort technique, 
and then 
to print both the given array and the sorted array with suitable headings. 
*/

/*

Selection sort is a simple sorting algorithm that 
repeatedly finds the smallest (or largest) element 
from the unsorted part of an array and swaps it with 
the first unsorted element. It works by dividing the 
array into a sorted and an unsorted section, and 
gradually grows the sorted section by selecting the 
smallest element from the unsorted section and moving 
it to its correct position.

*/

#include <stdio.h>

int main() 
{ 
    int a[50], n, temp, i, j, pos; 
    
    printf("Enter the value of n\n"); 
    scanf("%d", &n); // 3
    
    printf("Enter the numbers\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); // 10 60 40
    
    printf("Entered values are\n"); 
    for(i = 0; i < n; i++) 
        printf("%d\t", a[i]); // 10 60 40

    // Selection sort algorithm
    for(i = 0; i < n - 1; i++)  
    { 
        pos = i; 
        for(j = i + 1; j < n; j++) 
        { 
            if(a[j] < a[pos])  
                pos = j; 
        } 
        // Swap elements
        temp = a[i]; 
        a[i] = a[pos]; 
        a[pos] = temp; 
    } 
    
    printf("\nThe sorted values are\n"); 
    for(i = 0; i < n; i++) 
        printf("%d\t", a[i]); 
    
    return 0; 
}


// #include <stdio.h> 

// int main() 
// { 
//     int a[50], n, temp, i, j, pos; 
    
//     printf("Enter the value of n\n"); 
//     scanf("%d", &n); 
    
//     printf("Enter the numbers\n"); 
//     for(i = 0; i < n; i++) 
//         scanf("%d", &a[i]); 
    
//     printf("Entered values are\n"); 
//     for(i = 0; i < n; i++) 
//         printf("%d\t", a[i]); 

//     // Selection sort algorithm
//     for(i = 1; 1 < 2; i++) 
//     { 
//         pos = 1; 
//         for(j = 2; 2 < 3; j++) 
//         { 
//             if(a[2] < a[1])  // if(40 < 60) 
//                 pos = 2; 
//         } 
//         // Swap elements
//         temp = a[1]; // 60
//         a[1] = a[2]; // 40
//         a[2] = temp; // 60
//     } 
    
//     printf("\nThe sorted values are\n"); 
//     for(i = 0; i < n; i++) 
//         printf("%d\t", a[i]); 
    
//     return 0; 
// }

// 3
// 10 60 40
// 0  1  2

// 10 40 60