/*GONZALES, LORD EDMUND L.
 BSIT 1B T123

Using nested loops(a loop within a loop),create a program that
will accept an integer greater than 0(N),and print out N lines
of asterisks('*')into a pattern specific to that input,as seen
on the samples.*/

#include <stdio.h>


int main()
{
    int x;
    printf("Enter integer: ");
    scanf("%d", &x);
    if (x > 0)
    {
        for (int a = 1; a < x + 1; a++)
        {
        for (int b = 1; b <= a; b++)
        {
        if (b == 1)
        {
        for (int c = 0; c < x - a; c++)
        {
           printf(" ");
        }
         }
           printf("* ");
        }
           printf("\n");
        }
    }
    else
    {
        printf("Invalid input!");
        return -1;
    }
    return 0;
}
