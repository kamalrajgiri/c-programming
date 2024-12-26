#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float a=7.3285;
    int b=9514;
    printf("a=%3f & b=%-6d in first line", a,b);
    printf(" \n a=%-7.3f and b=%07d in second line ",a,b);
    printf(" \n a = %0.2f and b=%3d in third line ",a,b);
    return 0 ;
}
