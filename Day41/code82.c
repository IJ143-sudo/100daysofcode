//Print each character of a string on a new line

#include <stdio.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until null terminator
    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] != '\n')  // Ignore newline character
            printf("%c\n", str[i]);
    }

    return 0;
}