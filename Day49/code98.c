/*Print initials of a name with the surname displayed in full.*/

#include <stdio.h>

int main() 
{
    char name[35];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;

    // Print first initial
    if (name[i] != ' ')
        printf("%c. ", name[i]);

    // Print initials of middle names + detect surname start
    for (i = 1; name[i] != '\0'; i++) {

        // If previous is space and this is not space then it is a new word
        if (name[i-1] == ' ' && name[i] != ' ')
         {
            // Check if this is the last word (surname)
            int j = i;
            int space_found = 0;

            while (name[j] != '\0') 
            {
                if (name[j] == ' ') 
                {
                    space_found = 1;
                    break;
                }
                j++;
            }
            // If no more spaces then  this is surname
            if (!space_found) 
            {
                printf("%s", &name[i]);   // print surname in full
                break;
            }
            // Otherwise print initial(middle name)
            printf("%c. ", name[i]);
        }
    }

    return 0;
}