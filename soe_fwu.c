#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    FILE *fp;
    char s[]="I Belong To SOE FWU";
    fp=fopen("fwu_soe.txt","w");
    if (fp==NULL)
    {
        printf("file couldnt be opened");
        exit (1);
    }
    for (int i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
    char ch;
    fp=fopen("fwu_soe.txt","r");
    ch =fgetc(fp);
    while(!feof(fp))
    {
        printf(" %c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
}