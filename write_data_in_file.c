#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    char s[] = " i love file handling";
    p=fopen("myfile.txt", "w");
    if (p== NULL)
    {
        printf("file couldnt be opened");
      exit(1);
    }
    for (int i = 0; i < strlen (s); i++)
    {
        fputc(s[i], p);
    }
    fclose(p);
    return 0;
}