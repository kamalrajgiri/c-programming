// quardatic equation  using udf
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void root(int, int, int);
int main()
{
    int p, q, r;
    printf("the quarditic equation is px2+qx+r=0");
    printf("enter the cofficients p,q,r");
    scanf("%d,%d,%d", &p, &q, &r);
    root(p, q, r);
    return 0;
}
void root(int a, int b, int c)
{
    float x1, x2, real, img, disc;
    disc = b * b - 4 * a * c;
    if (disc == 0)
    {
        printf("\n the roots are real and equal");
        x1 = (-b / (2 * a));
        printf(" \n the roots are x1=%f and x2=%f ", x1, x1);
    }
    else if (disc > 0)
    {
        printf("\n the roots are real and distinct");
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        printf("\n the rots are x1=%f and x2=%f", x1, x2);
    }
    else
    {
        printf("the roots are imagnary and distinct");
        real = -b / (2 * a);
        img = sqrt(4 * a * c - b * b) / (2 * a);
        printf("the roots are x1 = %f +i%f and x2= %f -%if", real, img, real, img);
    }
}