//Toggle case of each character in a string.

#include <stdio.h>

int main()
 {
    char str[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] - 32; // Lowercase to uppercase
            
         else if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32; // Uppercase to lowercase
        
    }

    printf("Toggled case string: %s\n", str);
    return 0;
}