/*Print the initials of a name.*/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char name[25];
    
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // read full name with spaces

    // Print the first character if it's not a space
    if(name[0] != ' ')
        printf("%c.", toupper(name[0]));

    // Loop through the string
    for(int i = 0; name[i] != '\0'; i++) 
    {
        // If a space is found, print the next character
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') 
            printf("%c.", toupper(name[i+1])); 
    }

    return 0;
}