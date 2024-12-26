20// factorial of positive number using for loop

#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,n  , fact=1;
    printf("\n enter a positive number ");
    scanf("%d", &n);
    for (i=1 ; i<=n ; i++)
    {
        fact=fact*i ;
    }
   printf(" \n The factorial = %d", fact);
   return 0 ;
}