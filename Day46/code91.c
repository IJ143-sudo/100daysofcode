//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[30], result[30];
    int i, j = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Check if the character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') 
            result[j++] = str[i];
        
    }
    result[j] = '\0';  // Null terminate the new string
    
    printf("String without vowels: %s", result);
    
    return 0;
}