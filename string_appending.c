#include <stdio.h>
#include<stdlib.h>
int main()
    {
        char str[60];
        FILE *fp;
        fp = fopen("myfile.doc", "w");
        printf("write some string to file");
        gets(str);
        fputs(str, fp);
        fclose(fp);
        // to append data
        fp = fopen("myfile.doc", "a");
        printf("enter a string to append into file");
        gets(str);
        fputs(str, fp);
        fclose(fp);
        return 0;
    }