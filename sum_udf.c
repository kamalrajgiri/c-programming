#include<stdio.h>
int sum(int,int);
int main ()
{
    int a,b,c;
    printf("enter two integer");
    scanf("%d,%d",&a,&b);
    c=sum(a,b);
    printf("\n the sum is %d",c);
    return 0 ;
}
int sum(int k,int l)
{
    int m;
    m=k+l;
    return m;
}