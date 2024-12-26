// CONCATENATE ANY TWO FUNCTION WITHOUT USING STRING HANDLING FUNCTION
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s1[20], s2[20], i = 0, j = 0;
    printf("enter first string ");
    gets(s1);
    printf("enter second string ");
    gets(s2);
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    for (i = 0; s1[i] != '\0'; i++)
        printf("%c", s1[i]);
    return 0;
}