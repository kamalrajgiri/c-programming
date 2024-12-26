#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter the elements of array ");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (a[j]<a[i])
            {
                int t;
                 t=a[j];
                 a[j]=a[i];
                 a[i]=t;
            }
        }
    }
    printf("the elemernts in decending order are :");
    for(i=0;i<10;i++)
    printf("%d \t",a[i]);
    return 0;
}