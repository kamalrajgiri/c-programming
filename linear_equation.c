// program to find the roots of linear equation
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d, e, f;
    float x, y;
    printf(" the given equation is ax + by = c and dx + ey =f ");
    printf(" \n enter the value of a,b,c,d,e,f ");
    scanf(" %d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f);
    x = (b * f - c * e) / (b * d - a * e);
    y = (a * f - c * d) / (a * e - b * d);
    printf(" \n the roots of linear eqn are %f and %f ", x, y);
    return 0;
}