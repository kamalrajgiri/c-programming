// year month day
#include <stdio.h>
int main()
{
    int y, m, d, r, n;
    printf("enter no of days");
    scanf("%d", &n);
    r = n % 365;
    y = n / 365;
    m = r / 30;
    r = r % 30;
    d = r;
    printf("the time is %d years %d months %d days", y, m, d);
    return 0;
}