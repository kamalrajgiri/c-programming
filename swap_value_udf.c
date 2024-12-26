#include<stdio.h>
int swap(int,int);
int main ()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d,%d",&a,&b);
    swap(a,b);
    return 0 ;
}
int swap(int p,int q)
{
    p=p+q;
    q=p-q;
    p=p-q;
    printf("the swap numbers are %d & %d", p,q);
}