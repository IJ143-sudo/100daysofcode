//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main()
 {
    char str[20];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
     {
        // Only convert lowercase letters
        if (str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] - 32;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}