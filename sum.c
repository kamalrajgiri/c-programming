#include <stdio.h>
// # define pi 3.14
int sum(int, int);
int main()
{
    int a, b;
    float c;
    printf("Enter any two integer values");
    scanf("%d%d", &a, &b);
    c = sum(a, b);
    printf("The sum is %f", c);
    return 0;
}
int sum(int p, int q)
{
    float r;
    r = p + q;
    return r;
}