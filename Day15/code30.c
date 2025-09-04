//Write a program to reverse a given number.
#include <stdio.h>

int main()
 {
    int num, reversed = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0)
     {
        remainder = num % 10;             // get last digit
        reversed = reversed * 10 + remainder; // add digit to reversed
        num = num / 10;                   // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}


