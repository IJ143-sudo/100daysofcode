//Find the first repeating lowercase alphabet in a string.


#include <stdio.h>
#include <string.h>

int main()
 {
    char str[30];
    int freq[26] = {0};  // To store frequency of each lowercase letter
    int i, found = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++)
     {
        if (str[i] >= 'a' && str[i] <= 'z')  // Check for lowercase letter
           {
             freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2)
             {     
                printf(" %c", str[i]);
                found = 1;
                break;
            }
        }
    }
    
    if (!found)
        printf("No repeating lowercase alphabet found.\n");
    
    return 0;
}