/*
{WAP to print
   *
  ***
 *****
*******
}
*/
#include <stdio.h>
int main()
{
    int i, j,k;
   // char k ;
    for (i = 1; i <= 5; i++)
    {
       // k =65;
        for (j = 1; j <= 9; j++)
        {
            if (j >=(6 - i) && j <= (4 + i))
            {
               printf("*");
               // printf("%c",k);
             //  k++; 
             //j < 4 ? k++ : k--;
            }
            else
                printf(" ");
              //  if(j==4)
              //  k--;
        }
        printf("\n");
    }

    return 0;
}