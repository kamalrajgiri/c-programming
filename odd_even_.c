// print odd or even
//  use goto statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf(" enter a number ");
    scanf("%d", &n);
    if (n % 2 == 0)
        goto even;
    else
        goto odd;
even:
    printf("\n the number you entered is even ");
odd:
    printf("\n the number you entered is odd");
    return 0;
}