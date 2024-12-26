//read-write-display
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp;
    char name[20];
    int roll;
    float marks;
    fp=fopen("newfile.txt","w");
    if (fp==NULL)
    {
        printf("file not opened");
        exit (1);
    }
    printf("enter name,roll and marks");
    scanf("%s,%d,%f", name, &roll, &marks);
    //write into file
    fprintf(fp, "name = %s \t roll = %d \t marks = %f", name, roll, marks);
    fclose(fp);
    // read data from file 
    fp=fopen("newfile.txt","r");
    fscanf(fp,"%s,%d , %f", name, &roll , &marks);
    //display data
    printf("\n name =%s \t roll =%d \t marks=%f", name ,roll ,marks );
    fclose(fp);
    return 0;
}