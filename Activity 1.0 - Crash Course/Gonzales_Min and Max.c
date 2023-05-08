/*GONZALES, LORD EDMUND L.
 BSIT 1B T123

Create a program that accepts 10 positive integers and
points out the smallest and largest number(s)in the list.*/

#include <stdio.h>


int main()
{

    printf("\n\nMIN AND MAX \n");
    int min = 1, max = 1;

    for (int a = 1; a <= 10; a++)
    {
        int num;
        printf("\n[%d] Input Number: ",a);
        scanf("%d", &num);

    if(num > 0)
    {
        if(num > max)
            {
            max = num;
            }

        if(num < min)
            {
            min = num;
            }
    }
    else {
            printf("Invalid Input! Try Again.\n");
            a--;
            continue;
        }

    }
    printf("Min: %d", min);
    printf("\nMax: %d", max);

return 0;
}
