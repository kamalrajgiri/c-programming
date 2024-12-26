// WAp to allocate and free memory at run time
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("enter array size");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(A, 2 * n * sizeof(int));
    printf("\n previous block address= %d and new block adress = %d", A, B);
    for (i = 0; i < 2 * n; i++)
    {
        printf("\n %d \n ", B[i]);
    }
    free(B);
    return 0;
}