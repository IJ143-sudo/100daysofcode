/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main()
 {
    int n = 4;  
    int i, j;

    // Upper half 
    for (i = 1; i <= n; i++)
     {
        // print spaces
        for (j = 1; j <= n - i; j++)
         {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++)
         {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) 
    {
        // print spaces
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}