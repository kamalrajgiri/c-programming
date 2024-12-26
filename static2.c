#include<stdio.h>
void update ()
{
    static int p=3;
    printf("%d \n",p);
    p++;
}
int main ()
{
    update();
    update(); 
    update();
    return 0 ;
}