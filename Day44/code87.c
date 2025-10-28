//Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main()
 {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;

        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            ; // Ignore letters
        else if (ch != '\n') // Count everything else as special
            special++;
    
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}