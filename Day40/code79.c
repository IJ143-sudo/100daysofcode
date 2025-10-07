//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() 
{
    int R, C ;
    printf("Enter rows and columns: ");
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    printf("Enter matrix elements:\n");
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&matrix[i][j]);

    printf("Diagonal Traversal:\n");

    // Loop over all diagonals
    for(int d=0; d < R + C - 1; d++) 
    {
        // For each diagonal, check all elements
        for(int i=0; i<R; i++)
         {
            for(int j=0; j<C; j++) 
            {
                if(i + j == d) 
                    printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
