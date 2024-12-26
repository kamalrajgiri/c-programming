//fibonacci series
#include <stdio.h>
int main()
{
    int i, n;
    int t[20];
    printf("the no of terms");
    scanf("%d", &n);
    t[1] = 0;
    t[2] = 1;
    for (i = 3; i < n; i++)
    {
        t[i] = t[i - 1] + t[i - 2];
    }
    printf("\n fibonaccis series is :");
     for (i = 1; i < n; i++)
    {
        printf("%d ,", t[i]);
    }
    return 0;
}
