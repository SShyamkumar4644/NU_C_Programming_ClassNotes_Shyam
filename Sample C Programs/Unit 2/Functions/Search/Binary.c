#include <stdlib.h> 
#include <stdio.h> 

int main() 
{ 
    int a[20], n, mid, l, h, i, key; 

    printf("Enter the value for n: "); 
    scanf("%d", &n); 

    printf("Enter %d elements in Ascending order:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 

    printf("Enter the key to search: "); 
    scanf("%d", &key); 

    l = 0; 
    h = n - 1; 

    while(l <= h) 
    { 
        mid = (l + h) / 2; 

        if(a[mid] == key) 
        { 
            printf("The key is found at position %d\n", mid + 1); 
            exit(0); 
        } 
        else if(key > a[mid]) 
        { 
            l = mid + 1; 
        } 
        else 
        { 
            h = mid - 1; 
        } 
    } 

    printf("The key is not found\n"); 
    return 0; 
}
