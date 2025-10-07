//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main()
{
   
    int rows, cols;
    int i, j;

    // Step 1: Input size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

     int a[rows][cols];

    if(rows != cols)
    {
        printf("Matrix is not square, so diagonal elements cannot be checked properly.\n");
        return 0;
    }

    // Step 2: Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Check distinctness of diagonal elements
    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < cols; j++) // compare a[i][i] with all elements after it
        {
            if(a[i][i] == a[j][j])
            {
                printf("False\n");
                return 0; // exit immediately
            }
        }
    }

    // Step 4: If no duplicates found
    printf("True");

    return 0;
}