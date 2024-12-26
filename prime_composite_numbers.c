// program to find the given number is prime or composite
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, flag = 0;
    printf("enter the number ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf(" 1 is neither prime nor composite");
    }
    else
    {
        if (flag == 0)
        {
            printf("the number %d is prime ", n);
        }

        else
        {
            printf("the number %d is composite", n);
        }
    }
    return 0;
}