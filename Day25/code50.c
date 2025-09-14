/*Write a program to print the following pattern:
*****
****
***
**
*
*/

#include <stdio.h>

int main() 
{
    int i, j;
    for (i = 5; i >= 1; i--)       // i controls how many stars per row
    {

    for (j = 1; j <= i; j++)       // print i stars
        {
             printf("*");
        }
        printf("\n");              // new line after each row
    }

    return 0;
}