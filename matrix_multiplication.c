//matrix multiplication 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void mult2darray(int[][10], int[][10], int[][10], int, int, int, int);
void displayarray(int[][10], int, int);
int main()
{
    int A[10][10], B[10][10], C[10][10], i, j, r1, r2, c1, c2, sum = 0;
    printf("enter size of matrix A");
    scanf("%d,%d", &r1, &c1);
    printf("enter size of matrix B");
    scanf("%d,%d", &r2, &c2);
    if (c1 == r2)
    {
        printf("enter the elements of matrix A");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        //printf("enter elements of matrix B");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
               // scanf("%d", &B[i][j]);
               B[i][j]=3*A[i][j];
            }
        }
        mult2darray(A, B, C, r1, c1, r2, c2);
        printf("resultant matrix:\n");
        displayarray(C, r1, c2);
    }
    else
    {
        printf("\n invalid array size");
    }
    return 0;
}
void mult2darray(int A[][10], int B[][10], int C[][10], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void displayarray(int p[][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
}