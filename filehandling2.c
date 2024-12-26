// WAP to write string into a file and read it
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[60];
    FILE *fp;
    fp = fopen("myfile.doc", "w");
    printf("write a string to file");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    // to append data
    fp = fopen("myfile.doc", "a");
    printf("write a string to append into file");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    // to read data
    char ch;
    fp = fopen("myfile.doc", "r");
    if (fp == NULL)
    {
        printf("file not opened");
        exit(1);
    }
    ch = fgetc(fp);
    while (!feof(fp))
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}