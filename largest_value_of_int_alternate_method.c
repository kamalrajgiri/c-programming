#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c , max ;
    printf("enter three intigers ");
    scanf("%d,%d,%d " ,&a, &b , &c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest number =%d" , max);
    return 0 ;
}