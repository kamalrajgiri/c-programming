/*wap to input an integer array of 7 elements in main function , pass that aaray to function
subtract 7 from each element , sort the array in decending order & display sorted array*/
#include <stdio.h>
void arr(int[], int);
int main()
{
    int a[20], i, n;
    printf("enter array size");
    scanf("%d", &n);
    printf("enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arr(a, n);
    return 0;
}
void arr(int x[], int n)
{
    int i, j, t;
    int y[10];
    for (i = 0; i < n; i++)
    {
        y[i] = x[i] - 7;
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t ",y[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (y[i] < y[j])
            {
                t = y[i];
                y[i] = y[j];
                y[j] = t;
            }
        }
    }
    printf("\n the elements in descending order are :");
    for (i = 0; i < n; i++)
        printf("%d \t", y[i]);
}