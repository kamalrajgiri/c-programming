#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, i, hcf;
    printf("enter two numbers");
    scanf("%d,%d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    printf(" HCF of %d and %d is %d", n1, n2, hcf);
    return 0;
}