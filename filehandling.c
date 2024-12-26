//fopen - fclose
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    FILE *fptr;
    char ch;
    struct student s;
    fptr = fopen("test.doc", "w");
    if (fptr == NULL)
    {
        printf("file  not opened");
        exit(1);
    }
    do
    {
        printf("enter data of students");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fwrite(&s, sizeof(s), 1, fptr);
        printf("do you want to add more data (Y/N?)");
        ch = getche();
    } while (ch == 'Y' || ch == 'y');
    printf(" \n data written into file successfully ");
    fclose(fptr);
    //  return 0;
    fptr = fopen("test.doc", "r");
    if (fptr == NULL)
    {
        printf("file not opened");
        exit(1);
    }
    printf("\n name \t roll \t marks \n ");
    while (fread(&s, sizeof(s), 1, fptr) == 1) // working if ==0
    {
        printf("\n %s \t %d \t %f", s.name, s.roll, s.marks);
        break;
    }
    fclose(fptr);
    return 0;
}
