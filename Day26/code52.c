/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/

#include <stdio.h>

int main()
 {
    int line, stars, i;

    for (line = 1; line <= 5; line++) 
    {
        // decide how many stars in this line
        if (line <= 3)
            stars = 2 * line - 1; // 1,3,5
        else
            stars = 2 * (5 - line + 1) - 1; // 3,1

        for (i = 0; i < stars; i++)
            printf("*\n");

        // blank line after each block except the last one
        if (line < 5)
            printf("\n");
    }

    return 0;
}