#include <stdio.h>
#include <conio.h>
int main()
{
    int n, k, r, sum = 0;
    printf("enter a multidigit number ");
    scanf("%d", &n);
    k = n;
    do
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    } while (n != 0);
    {
        if (k == sum)
            printf("the entered multidigit number %d is an armstrong number ", k);
        else
            printf("the entered multidigit number %d is not an armstrong number ", k);
    }
    return 0;
}