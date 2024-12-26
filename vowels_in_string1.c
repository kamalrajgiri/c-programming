#include <stdio.h>
int main()
{
    int i = 0, count = 0;
    char str[20] = "I love Nepal";
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            printf("\n %c ,%d", str[i],str[i]);
        }
        i++;
    }
    return 0;
}