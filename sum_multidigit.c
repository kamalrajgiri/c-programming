//WAP to find sum and average of sixdigit number using while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, r, sum = 0;
    printf("enter the six digit numbeer");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    } 
    printf("\n the sum of six digit number is %d", sum);
    printf("\n the average of  six digit number is %d", sum/6);


    return 0;
}