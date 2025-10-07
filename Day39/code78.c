//

#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++)
     {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of main diagonal elements
    for(int i = 0; i < n; i++)
     {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d", sum);

    return 0;
}