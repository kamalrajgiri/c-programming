#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int i,j,n,sign=-1;
    float x,sum=0.00,term=0;
    printf("Enter angle in degree and power of term upto which to sum\n");
    scanf("%f %d",&x,&n);
    x=x*3.14/180;
    int fact=1;
    for (i=1;i<=n;i+=2)
    {

        for(j=1;j<=i;j++)
        { 
            fact=fact*j;
        }
        term=sign*(-1)*pow(x,i)/fact;
        sum+=term;
        printf("\n%f",term);
        sign*=-1;
    }
    printf("\n sum of series upto nth power=%f",sum);
    return 0;
}