#include<stdio.h>
int main()
{
    int i=0;
    char s[13]="I love Nepal";
    while(s[i]!='\0')   /*for(i=0;s[i]!='\0';i++)*/
    {
        printf("%c",s[i]);
        i++; // printf("\n");
    }

    printf("%d",i);
    return 0;
}