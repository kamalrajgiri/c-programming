#include<stdio.h>
int fact(int);
int main ()
{
    int f,n;
    printf("enter a positive number");
    scanf("%d",&n);
    f=fact(n);
    printf("\n the factorial is %d",f);
    return 0 ;
}
int fact (int k)
{
    if (k==1)
    return 1;
    else 
    return(k*fact(k-1));
}