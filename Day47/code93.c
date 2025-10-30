//Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>

// function to swap two characters
void swap(char *a, char *b)
 {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// bubble sort for characters
void sortstr(char str[])
 {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (str[j] > str[j + 1]) 
                swap(&str[j], &str[j + 1]);
        }
    }
}

int main()
 {
    char s[25], t[25];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // if lengths differ, not anagrams
    if (strlen(s) != strlen(t)) 
    {
        printf("Not Anagram\n");
        return 0;
    }

    sortStr(s);
    sortStr(t);

    // compare sorted strings character by character
    if (strcmp(s, t) == 0) 
        printf("Anagram\n");
     else 
        printf("Not Anagram\n");

    return 0;
}