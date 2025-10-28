//Reverse a string.

#include <stdio.h>

int main()
 {
    char str[20];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while (str[len] != '\0') 
    {
        if (str[len] == '\n') 
        {
            str[len] = '\0';
            break;
        }
        len++;
    }

    // Reverse the string in-place
    for (int i = 0; i < len / 2; i++)
     {
        char temp = str[i];
        str[i] = str[len- 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}