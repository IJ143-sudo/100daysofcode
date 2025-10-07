/*Check if a matrix is symmetric.
It is a square matrix (number of rows = number of columns).
Its transpose is equal to itself:
a[i][j]=a[j][i]for all i,j*/

#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    // Input size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    if(rows != cols)
    {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < i; j++)  // only check below diagonal
        {
            if(a[i][j] != a[j][i])
            {
                printf("Matrix is not symmetric.\n");
                return 0;  // exit immediately
            }
        }
    }

    // If no mismatch found
    printf("Matrix is symmetric.\n");

    return 0;
}

