#include<stdio.h>
void subtract(int m, int n, int mat1[m][n], int a, int b, int mat2[a][b])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(mat1+i)+j) = *(*(mat1+i)+j) - *(*(mat2+i)+j);
        }
    }
}
int main()
{
    int m, n, a, b, i, j;
    printf("Enter dimensions of Matrix 1:\n");
    scanf("%d %d", &m, &n);
    int mat1[m][n];
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (mat1+i)+j);
    }
    printf("Enter dimensions of Matrix 2:\n");
    scanf("%d %d", &a, &b);
    int mat2[a][b];
    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (mat2+i)+j);
    }
    if(m==a && n==b)
    {
        subtract(m, n, mat1, a, b, mat2);
        printf("After subtraction:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d ", *(*(mat1+i)+j));
            printf("\n");
        }
    }
    else
        printf("Matrices cannot be subtracted\n");
    return 0;
}