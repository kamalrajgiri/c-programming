//area of trapeoidal
#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, h, A;
    printf("enter height and sides of trapezoidal");
    scanf("%f ,%f, %f", &h, &a, &b);
    A = h * (a + b) / 2;
    printf("area of trapezoidal A  = %f", A);
    return 0;
}