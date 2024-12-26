#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d,%d", &a, &b);
    printf("\n the number before swap are %d & %d",a,b);
    swap(&a, &b);
    printf("\n the swaped values are %d & %d",a,b);
    return 0;
}
int swap(int *p, int *q)
{
    int k;
    k = *p;
    *p = *q;
    *q = k;
    //printf(" \n the swaped value are %d & %d", *p, *q); // remove
}