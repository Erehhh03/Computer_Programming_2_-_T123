/*GONZALES, LORD EDMUND L.
  BSIT-1B T123

Create a program that accepts one integer input and outputs the
Binary, Octal, and Hexadecimal equivalent of that input.*/

#include<stdio.h>

    void convert(int, int);

    int main()
    {

    int num;
    printf("\n\n DECIMAL TO BINARY,OCTAL AND HEXADECIMAL \n");
    printf("\nEnter Decimal Integer: ");
        scanf("%d", &num);
    printf("Binary: ");
        convert(num, 2);
    printf("\nOctal: ");
        convert(num, 8);
    printf("\nHexadecimal: ");
        convert(num, 16);
    return 0;
    }

    void convert (int num, int base)

    {
    int reminder = num%base;
        if(num == 0)
    return;
            convert(num/base, base);
        if(reminder < 10)
    printf("%d", reminder);
        else
    printf("%c", reminder - 10 + 'A' );
    }
