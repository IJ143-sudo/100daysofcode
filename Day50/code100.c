/*Print all sub-strings of a string.*/

#include <stdio.h>
#include <string.h>

int main()
 {
    char str[20];
    
    printf("Enter a string: ");
    scanf("%s", str);  // reads string without spaces

    int n = strlen(str);

    printf("All substrings of  are:\n", str);

    for (int i = 0; i < n; i++)
     {
        for (int j = i; j < n; j++)
         {
            // Print substring from i to j
            for (int k = i; k <= j; k++)
                printf("%c ", str[k]);
         }
    }

    return 0;
}