//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main()
 {
    char str[15];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until null terminator
    while (str[count] != '\0') 
        count++;
    

    // To remove the newline character counted by fgets
    if (str[count - 1] == '\n') 
        count--; 
    

    printf("Number of characters: %d\n", count);
    return 0;
}