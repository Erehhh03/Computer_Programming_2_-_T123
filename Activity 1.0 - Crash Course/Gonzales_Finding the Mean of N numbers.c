/*GONZALES, LORD EDMUND L.
 BSIT 1B T123

Create a program that accepts N positive integers, terminating only
if 0 is used as an input. It will then output the mean or average of
the positive numbers. Negative numbers should not be accepted as an
input and should not be reflected in the total number of inputs.*/

#include <stdio.h>


int main()
{
    printf("\n\n FINDING THE MEAN OF N NUMBERS \n");
        int a = 1, num, sum = 0, count = 0;
        float mean;

    while (1)
    {
        printf("\n[%d] Input Number: ", a);
            scanf("%d", &num);

        if (num < 0)
        {
            continue;
        }
        else if (num == 0)
        {
            break;
        }
        else
        {
            count++;
            sum += num;
            a++;
        }
    }
    mean = sum / count;
    printf("AVERAGE = %.f.", mean);

return 0;
}
