/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() 
{
    int n = 5; 
    int i, j;

    // upper half
    for (i = 1; i <= n; i++) 
    {
        // print stars 
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (i = n - 1; i >= 1; i--) 
    {
        // print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}