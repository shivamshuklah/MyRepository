#include <stdio.h>
void fillElement(int matrix[][10], int r, int c)
{
    int i, j;
    printf("Enter elements of matrix  ");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter a%d%d :: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
//Matrix Multiplication
void matrixMultiplication(int matrix1[][10], int matrix2[][10], int result[][10], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void displayElement(int matrix[][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10], r1, r2, c1, c2;
    printf("Enter no. rows of first matrix :: ");
    scanf("%d", &r1);
    printf("\nEnter no. columns of first matrix :: ");
    scanf("%d", &c1);
    printf("\nEnter no. rows of second matrix :: ");
    scanf("%d", &r2);
    printf("\nEnter no. columns of second matrix :: ");
    scanf("%d", &c2);

    // Checking if multiplication is possible or not

    while (c1 != r2)
    {
        printf("\nError!!! Enter data again ");
        printf("\nEnter no. rows of first matrix :: ");
        scanf("%d", &r1);
        printf("\nEnter no. columns of first matrix :: ");
        scanf("%d", &c1);
        printf("\nEnter no. rows of second matrix :: ");
        scanf("%d", &r2);
        printf("\nEnter no. columns of second matrix :: ");
        scanf("%d", &c2);
    }

    // Taking elements in matrix
    printf("\n\nMatrix1\n\n");
    fillElement(matrix1, r1, c1);
    printf("\n\nMatrix2\n\n");
    fillElement(matrix2, r2, c2);
    printf("\n\nMatrix1\n\n");
    displayElement(matrix1, r1,c1);
    printf("\n\nMatrix2\n\n");
    displayElement(matrix2,r2,c2);
    matrixMultiplication(matrix1, matrix2, result, r1, c1, r2, c2);
    displayElement(result, r1, c2);

    return 0;
}
