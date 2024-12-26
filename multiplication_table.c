// print multiplication table upto 12
#include <stdio.h>
#include <conio.h>
int main()
{
    int row, col, i, j;
    printf("enter number of rows and columns ");
    scanf("%d,%d", &row, &col);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%d \t", i * j);
        }
        printf(" \n ");
    }
    return 0;
}