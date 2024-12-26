#include <stdio.h>
int main()
{
    int a[10], i, n, sum = 0;
    float avg;
    printf("enter the no of elements of array");
    scanf("%d", &n);
    printf("enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("\n the average is %f", avg);
    return 0;
}