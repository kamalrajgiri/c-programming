#include <stdio.h>
#define max_size 100
int main()
{
    
    int ar[max_size], i, size, num, pos;
    printf("enter size of array");
    scanf("%d", &size);
    printf("\n input array elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\n input the element and position to insert element");
    scanf("%d,%d", &num, &pos);
    if (pos > (size + 1) || pos < 0)
    {
        printf("invalid position: please enter position between 0 and %d", size);
    }
    else
    {
        for (i = size; i >= pos; i--)
        {
            ar[i] = ar[i - 1];
        }                          // shifting array elements
        ar[pos - 1] = num;         // number inserted
        size++;                    // array size inserted
        for (i = 0; i < size; i++) // display array
            printf("%d ,", ar[i]);
    }
    return 0;
}