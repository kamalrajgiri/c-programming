#include <stdio.h>
int main()
{
    int a[10], max, i;
    printf("enter the elements of array"); 
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the greatest number is %d", max);
    return 0;
}