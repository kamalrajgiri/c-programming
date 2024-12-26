//2d array decleration by pointer notation
#include <stdio.h>
int main()
{
    int i, a[2][4] = {23, 35, 56, 78, 56, 67, 19,98};
    int (*p)[4];
    p=a;
    printf(" adress of a[1][0] is %u",*(*(p+1)+3));
    return 0;
}