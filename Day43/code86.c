//

#include <stdio.h>

int main() 
{
    char str[20];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    length = 0;
    while (str[length] != '\0')
     {
        if (str[length] == '\n') 
        {
            str[length] = '\0';
            break;
        }
        length++;
    }

    for (int i = 0; i < length / 2; i++)
     {
        if (str[i] != str[length - 1 - i]) 
        {
            printf("The string is not a palindrome.\n");
            return 0;  //  not palindrome exit immediately
        }
    }

    printf("The string is a palindrome.\n");
    return 0;
}