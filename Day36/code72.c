//Find the sum of all elements in a matrix.

#include <stdio.h>

int main()
{
    
    int rows, cols;     // store number of rows and columns
    int i, j;           // loop variables
    int sum = 0;        // store total sum

    // Step 1: Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];      // declaration of 2D array (matrix)

    // Step 2: Input elements in matrix form
    printf("Enter elements of the matrix (row by row):\n");
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
            printf("%d\t", a[i][j]);  // \t keeps columns aligned
        }
        printf("\n");
    }

    // Step 4: Calculate sum of all elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum += a[i][j];   // add each element to total
        }
    }

    // Step 5: Print the total sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}