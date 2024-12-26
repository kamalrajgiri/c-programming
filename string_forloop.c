// to leave some character
#include <stdio.h>
int main()
{
    char s[13] = "i  love nepal";
    int i;
   for (i = 0; i <= 12; i++)
    {
        printf("%c", s[i]);
        printf("");
    }
    printf("\n %d", i);
    // for (i = 0; i <= 12; i++)
    // {
    //     while (s[i] != s[0] && s[i] != s[1])
    //     {
    //         continue;
    //     }
    //     printf("%s", s[i]);
    // }
    return 0;
}