/*Write a program to print the following pattern:
*****
*****
*****
*****
*****  
*/

#include <stdio.h>

int main() 
{
    int i, j;

    for (i = 1; i <= 5; i++)         // rows
       
    {

     for (j = 1; j <= 5; j++)           // columns
     {
      printf("*");               // print star
     }
        printf("\n");                  // move to next line after a row
    }

    return 0;
}