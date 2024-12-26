//WAP to display larger number using concept of user defined function returning pointer variable 
#include <stdio.h>
int *larger(int *, int *);
int main()
{
   // int a = 20, b = 10;
   int a,b;
   printf("enter value of a and b");
   scanf("%d %d",&a,&b);
    int *p;
    p = larger(&a, &b);
    printf("%d is larger value", *p);
    return 0;
}
int *larger(int *x, int *y)
{
    if (*x > *y)
        return x;
    else
        return y;
}