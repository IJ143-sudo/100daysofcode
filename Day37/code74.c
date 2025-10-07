//Find the transpose of a matrix.

#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    // Step 1: Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], transpose[cols][rows];

    // Step 2: Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Print original matrix
    printf("\nOriginal matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    // Step 4: Compute transpose
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];  // flip rows and columns
        }
    }

    // Step 5: Print transpose
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < cols; i++)  
    {
        for(j = 0; j < rows; j++)
            printf("%d\t", transpose[i][j]);
            
        printf("\n");
    }

    return 0;
}