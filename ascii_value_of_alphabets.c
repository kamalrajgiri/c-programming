/* print alphabetic character and their ASCII value in 
a range 65 to 122 but skip non alphabetic character
 from 91 to 96 using continue statement */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i ;
    for (i =65;i<=122; i++)
    {
        if (i>90&&i<97)
        {continue ;
        }
        else 
        printf("\t %c=%d" , i,i);
    }
    return 0;
}