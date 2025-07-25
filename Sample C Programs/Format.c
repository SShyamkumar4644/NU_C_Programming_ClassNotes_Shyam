#include <stdio.h>
#include <stdlib.h>

void ascending(int b[], int n);
void descending(int b[], int n);

int main() 
{
    int n, i, a[100], ch;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    printf("Enter Your Choice:\n");
    printf("1. Ascending order sorting\n");
    printf("2. Descending order sorting\n");
    scanf("%d", &ch);
    
    if (ch == 1) 
        ascending(a, n);
    else 
        descending(a, n);
    
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) 
        printf("%d\t", a[i]);
    
    printf("\nThank you\n");
    return 0;
}

void ascending(int b[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (b[j] > b[j + 1]) 
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

void descending(int b[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (b[j] < b[j + 1]) 
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}
