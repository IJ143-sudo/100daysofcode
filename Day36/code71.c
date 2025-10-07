//Read and print a matrix.

#include <stdio.h>

int main()
{
      
    int rows, cols;  // to store size of matrix
    int i, j;        // loop variables

    // take number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    // input elements of matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // print the matrix
    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");  // move to next row after each row is printed
    }

    return 0;
}