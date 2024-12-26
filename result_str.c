// WAP to make structure named student that has name ,roll 
//and marks(of 5 subjects) as its members .display name roll nom and percantage obtaine by student  
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    float marks[5];
} s;
int main()
{
    int i, sum = 0;
    float per;
    printf("enter name and roll no of a student");
    gets(s.name);
    scanf("%d", &s.roll);
    printf(" \n enter marks of 5 subjects");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &s.marks[i]);
        sum += s.marks[i];
    }
    per = (sum / 5) ;
    printf("name : %s \n roll no : %d", s.name, s.roll);
    printf("\n obtained percentage : %f ", per);
    return 0;
}