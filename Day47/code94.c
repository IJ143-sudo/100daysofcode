//Find the longest word in a sentence

#include <stdio.h>
#include <string.h>

int main()
 {
    char sentence[60];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // read entire line including spaces

    int maxLength = 0;
    int length = 0;
    char longestWord[60] = "";
    char currentWord[60] = "";

    int j = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
     {
        // if current character is a space or end of line, word ends
        if (sentence[i] == ' ' || sentence[i] == '\n')
         {
            currentWord[j] = '\0';  // terminate current word
            if (j > maxLength) 
            {    // check if this word is longer
                maxLength = j;
                strcpy(longestWord, currentWord);
            }
            j = 0;  // reset for next word
        } else 
        {
            currentWord[j] = sentence[i];
            j++;
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %d\n", maxLength);

    return 0;
}