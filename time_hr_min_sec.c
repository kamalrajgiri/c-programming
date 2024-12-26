//time
#include <stdio.h>
int main()
{
    int hr, min, sec, r, n;
    printf("enter time in sec");
    scanf("%d", &n);
    {
        hr = n / 3600;
        r = n % 3600;
        min = r / 60;
        sec = r % 60;
    }
    printf("the time is %d hr %d min %d sec", hr, min, sec);
    return 0;
}