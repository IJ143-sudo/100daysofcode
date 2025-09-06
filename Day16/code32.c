//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main(

) {
    int num, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // store original number

    // reverse the number
    while (num > 0)
    {
        remainder = num % 10;              // last digit
        reversed = reversed * 10 + remainder; // reversed number
        num = num / 10;                   
    }

    // check if palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}