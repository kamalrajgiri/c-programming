#include <stdio.h>
int main()
{
    int i, x;
    printf("enter a number");
    scanf("%d", &x);
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            break;
        }
    }
    if (i == x)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);
    
    return 0;
}