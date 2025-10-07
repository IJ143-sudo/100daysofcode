

#include <stdio.h>

int main()
{
   
    int rows, cols;
    int i, j;

    // Step 1: Input size of matrices
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

     int a[rows][cols], b[rows][cols], sum[rows][cols];

    // Step 2: Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 4: Compute sum matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Step 5: Print first matrix
    printf("\nFirst matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    // Step 6: Print second matrix
    printf("\nSecond matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }

    // Step 7: Print sum matrix
    printf("\nSum of matrices:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}