#include<stdio.h>
#include<conio.h>
void main()
{
    float celcius ;
    printf("enter a temprature in a degree celcius  ");
    scanf("%f",& celcius );
    printf("\n temperature in ferhnite is  = %f ", (1.8*celcius) + 32 );
    getch();
}