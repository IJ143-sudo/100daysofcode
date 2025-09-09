//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() 
{
     long binary, Complement = 0;
    int digit, place = 1;

    
    printf("Enter a binary number: ");
    scanf("%ld", &binary);


    while (binary > 0)
     {
        digit = binary % 10;   // get last digit (either 0 or 1)

        if (digit == 0)
            digit = 1;         // flip 0 to 1
        else if (digit == 1)
            digit = 0;         // flip 1 to 0
        else 
        {
            printf("Invalid input!" );
            return 0;
        }

        Complement = digit * place + Complement; // build new number
        binary /= 10;    // remove last digit
        place *= 10;     // move to next place value
    }

    printf("1's complement: %ld\n", Complement);

    return 0;
}