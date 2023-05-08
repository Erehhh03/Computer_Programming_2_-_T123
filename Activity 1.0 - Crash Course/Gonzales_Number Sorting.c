/*GONZALES, LORD EDMUND L.
 BSIT 1B T123

Create a program that accepts 10 positive integers and
sorts these in descending order (highest to lowest).*/

#include <stdio.h>


void printArray(int arr[],int size)
{
    int v;
    printf("\nSorted list: ");
    for(v = 0; v < size; v++)
    {
        if(v == size - 1)
         {
         printf("%d",arr[v]);}

        else
         {
         printf("%d, ",arr[v]);}
    }
    printf("\n");
}

void swap(int* a,int* b)
{
    int cons = *a;
    *a = *b;
    *b = cons;
}
void bubbleSort(int *arr,int size)
{
    int v = 0;
    while (v < size - 1)
    {
        if(arr[v] < arr[v + 1])
         {
         swap(&arr[v], &arr[v + 1]);
         }

        v++;
        bubbleSort(arr, size-1);
    }
}


int main()
{
    int numbers[10];
    printf("\n\nNUMBER SORTING \n");
    for (int v = 1; v <= 10; v++)
    {
        int temp;
        printf("\n[%d] Input number: ",v);
        scanf("%d",&temp);
        if(temp <= 0)
        {
            printf("This is an invalid input. Try Again.\n");
            v--;
            continue;
        }
        numbers[v - 1] = temp;
    }
    bubbleSort(numbers,10);
    printArray(numbers,10);
    return 0;
}
