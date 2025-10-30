//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

int main() 
{
    char str[25];
    printf("Enter a string: ");
    scanf("%s", str);

    int size = strlen(str);
    int longest = 0;

    // try taking every index as a starting point
    for (int i = 0; i < size; i++) 
    {
        int seen[256] = {0};  // to keep track of what characters we’ve come across
        int count = 0;

        // move forward from this starting point
        for (int j = i; j < size; j++)
         {
            unsigned char ch = str[j];

            // if character already appeared once, stop here
            if (seen[ch] == 1) 
                break;
            

            // mark current character as visited
            seen[ch] = 1;
            count++;
        }

        // update the length if current substring is longer
        if (count > longest) 
            longest = count;
        
    }

    printf("Length of longest substring without repeating characters = %d\n", longest);

    return 0;
}