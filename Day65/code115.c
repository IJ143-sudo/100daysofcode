/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, 
meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".
*/

int main()
 {
    char s[25], t[25];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // if lengths are not same, they can’t be anagrams
    if (strlen(s) != strlen(t))
     {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};  // to store frequency of each letter (a–z)

    // count characters of first string
    for (int i = 0; s[i] != '\0'; i++) 
        count[s[i] - 'a']++;

    // subtract characters of second string
    for (int i = 0; t[i] != '\0'; i++) 
        count[t[i] - 'a']--;

    // if any count is not zero, they are not anagrams
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0)
         {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
