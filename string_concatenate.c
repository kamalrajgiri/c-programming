/*WAP to concatenate two strings without using string function 
 use concept of passing string to the function to code for it */
#include<stdio.h>
void concate(char[],char[]);
int main()
{
    char s1[20],s2[20];
    printf("enter first string ");
    gets(s1);
    printf("enter another string ");
    gets(s2);
    concate(s1,s2);
    printf("\n concatenated string is %s",s1);
    return 0;
}
void concate (char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!=0)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}