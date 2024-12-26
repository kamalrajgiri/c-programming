// wap to sum the series 1+11+111+... upto n terms using/not using recursive function
#include <stdio.h>
int s(int);
int main()
{
    int n, i, term, sum = 0;
    printf("enter no of terms ");
    scanf("%d", &n);
    printf("\n the term is %d", n);
    /* for (i = 0; i < n; i++)
     {
        term=term*10+1;
         sum = sum + term;
     }*/
    sum = s(n);
    printf("\n the sum is %d", sum);
    return 0;
}
int s(int n)
{
    if (n == 1)
    {
        return (1);
    }
    else
    {
        int i, term = 0;
        for (i = 0; i < n; i++)
        {
            term = term * 10 + 1;
        }
        return term + s(n - 1);
    }
}