// find roots of quardatic equation aX2 + bX +c = 0
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  int a, b, c;
  float disc, x1, x2, real, img;
  printf("the given equation is ax^2+bx+c=0 \n ");
  printf("enter the values of coefficients ");
  scanf("%d,%d,%d", &a, &b, &c);
  disc = b * b - 4 * a * c; // disc=pow(b,2)-4*a*c
  if (disc == 0)
  {
    printf("\n the roots are real and equal");
    x1 = -b / (2 * a);
    printf("\n the equal roots are x1=x2=%f", x1);
  }
  else if (disc > 0)
  {
    printf("\n the roots are real and distinct");
    x1 = (-b + sqrt(disc)) / 2 * a;
    x2 = (-b - sqrt(disc)) / 2 * a;
    printf(" \n x1 and x2 are :%f and %f", x1, x2);
  }
  else
  {
    printf("\n the roots are imagnary");
    real = -b / 2 * a;
    img = sqrt(4 * a * c - b * b) / 2 * a;
    printf("x1=%f+i%f", real, img);
    printf("x2=%f-i%f", real, img);
  }
  return 0;
}