#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, r1, r2, c1, c2;
    printf(" enter the size of 2-d arrays");
    scanf("%d,%d,%d,%d", &r1, &r2, &c1, &c2);
    if (r1 == r2 && c1 == c2)
    {
        printf("\n enter elements of matrix a ");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf(" \n enter elements of matrix b");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        // addition of matrices
        printf("the resultant matrix is \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d \t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("row and column mismatched");
    }
    return 0;
}