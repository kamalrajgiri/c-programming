#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("enter a point ");
    scanf("%d,%d", &a, &b);
    if (a == 0, b == 0)
        printf("\n the point (%d,%d) lies at origin", a, b);
    else if (a > 0 && b > 0)
        printf(" \n the point (%d,%d)lies at 1st quardent ", a, b);
    else if (a > 0 && b > 0)
        printf(" \n the point (%d,%d)lies at 1st quardent ", a, b);
    else if (a < 0 && b > 0)
        printf(" \n the point (%d,%d)lies at 2nd quardent ", a, b);
    else if (a < 0 && b < 0)
        printf(" \n the point (%d,%d)lies at 3rd quardent ", a, b);
    else
        printf(" \n the point (%d,%d)lies at 4th quardent ", a, b);
    return 0;
}