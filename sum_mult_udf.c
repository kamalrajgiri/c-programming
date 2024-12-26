#include <stdio.h>
int t, l, a, b, c = 5;
int sum(int, int);
int mult(int, int);
int main()
{
    int d, e;
    printf("enter two numbers");
    scanf("%d,%d", &a, &e);
    d = sum(a, e);
    l = mult(b, c);
    printf("\n the sum = %d", d);
    printf("\n the multiplication = %d", l);
    return 0;
}
int sum(int k, int l)
{
    b = k + l;
    return (b);
}
int mult(int p, int q)
{
    t = p * q ;
    return (t);
}