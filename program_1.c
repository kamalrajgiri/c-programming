#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    float d;
    char e;
    printf("enter two integer");
    scanf("%d , %3d", &a, &b);
    printf("\n the value storted in a is %d and b is %d ", a, b);
    printf("\n enter value of d and e ");
    scanf("%f , %c", &d, &e);
    printf("\n the values in d is %f and e is %c  ", d, e);
    getch();
    return 0;
}