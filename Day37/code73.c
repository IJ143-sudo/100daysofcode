//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main()
{
   
    int rows, cols;
    int i, j;

    // Step 1: Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

     int a[rows][cols];      // matrix
    int rowSum[rows];     // array to store sum of each row

    // Step 2: Input matrix elements row by row
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Print the matrix 
    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Step 4: Calculate sum of each row
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;              // initialize sum for current row
        for(j = 0; j < cols; j++)
        {
            rowSum[i] += a[i][j];   // add elements of row i
        }
    }

    // Step 5: Print sum of each row
    printf("\nSum of each row:\n");
    for(i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i+1, rowSum[i]);
    }

    return 0;
}