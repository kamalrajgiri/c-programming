/* WAP to make a structure named emoployee that have the members name , id ,age . use this structure to input above data of six employee and
display same data for the employee . use concept of structure array passing to the function .*/
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    int id;
    float age;
};
void enterdata(struct employee e[], int p)
{
    for (int i = 0; i < p; i++)
    {
        printf("enter name , id and age  ");
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].age);
    }
}
void display(struct employee s[], int q)
{
    for (int i = 0; i < q; i++)
    {
        printf("\n name : %s  id : %d  age : %f", s[i].name, s[i].id, s[i].age);
    }
}
int main()
{
    struct employee a[2];
    printf("enter employee info : ");
    enterdata(a, 2);
    printf(" \n display employee data : ");
    display(a, 2);
    return 0;
}