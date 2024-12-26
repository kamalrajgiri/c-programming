// to swap the value of two numbers
#include <stdio.h>
#include <conio.h>
int main()
{
  int a, b, c; // int a,b ;
  printf("enter value of teo intigers ");
  scanf(" %d,%d", &a, &b);
  a = a + b; // c=a ;  // a=a+b;
  b = a - b; // a=b;   // b=a-b ;
  a = a - b; // b=c ;  // a=a-b ;
  printf(" the swaped values are : a=%d & b=%d", a, b);
  return 0;
}