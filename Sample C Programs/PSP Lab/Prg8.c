/*
File handling allows a program to read from 
and write to files on the disk, enabling data 
storage beyond a program's runtime.


File Input and Output:
The program takes input from the user and saves 
it to a file called "INPUT". It then reads from 
"INPUT" and copies that data to another file 
called "OUTPUT". Finally, it reads from "OUTPUT" 
and displays the content on the screen.

File Operations:
The code uses various file operations:

Opening files (fopen) in different modes (write, read).
Reading and writing characters (getc for reading, putc for writing).
Closing files (fclose) to save data and free resources.

*/

/*
Write a C program to copy contents of one file 
to another file.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    char c;

    printf("PLEASE ENTER YOUR INFORMATION\n");

    // Open file "INPUT" for writing
    f1 = fopen("INPUT", "w");
    while ((c = getchar()) != EOF) // end of file
        putc(c, f1);
    fclose(f1);

    // Open "INPUT" for reading and "OUTPUT" for writing
    f1 = fopen("INPUT", "r");
    f2 = fopen("OUTPUT", "w");
    while ((c = getc(f1)) != EOF)
        putc(c, f2);
    fclose(f1);
    fclose(f2);

    // Display contents of "OUTPUT" file
    printf("The stored information in file are\n");
    f2 = fopen("OUTPUT", "r");
    while ((c = getc(f2)) != EOF)
        putchar(c);
    fclose(f2);

    return 0;
}
