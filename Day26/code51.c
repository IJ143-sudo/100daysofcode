/*Write a program to print the following pattern:
5
45
345
2345
12345

*/

#include <stdio.h>

int main() 
{
    int row, num;
    for (row = 1; row <= 5; row++)
     {
        int start = 6 - row;            // starting number of each row
        for (num = start; num <= 5; num++)    
        {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}