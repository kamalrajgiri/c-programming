#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// armstrong number upto m
int main()
{
    int n, m, k, r, a;
    printf("enter max number ");
    scanf("%d", &m);
    {
        for (k = 1; k++; k <= m)
        {
            n = k;
            int sum = 0;
            do
            {
                r = n % 10;
                sum = sum + (r * r * r);
                n = n / 10;
            } while (n != 0);
            if (k == sum)
                printf("\n %d ", k);
        }
    }
    return 0;
}