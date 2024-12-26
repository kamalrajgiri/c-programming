#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a =79, sum = 0, n;
    printf("enter the number of terms needed \n");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        a = a + 2;
        sum = sum + a;
        printf("%i , ", a);
    }
    printf("\n sum = %d", sum);
    return 0;
}