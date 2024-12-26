#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, max, hcf;
    printf("enter two numbers");
    scanf("%d,%d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            hcf = (n1 * n2) / max;
            printf("HCF of %d and %d is %d", n1, n2, hcf);
            break;
        }
        max++;
    }
    return 0;
}