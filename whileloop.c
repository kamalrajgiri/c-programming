// wap to enter 6 digit number and find sum and average of its all digits using while loop
#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    float avg;
    printf("enter six digit number");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    printf("sum is %d", sum);
    avg = sum / 6;
    printf("\n average is %f", avg);
    return 0;
}