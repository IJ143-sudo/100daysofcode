//Write a program to print all factors of a given number.

#include <stdio.h>

int main()
 {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors are: ", num);

    // Loop from 1 to num
    for(i = 1; i <= num; i++)
     {
        // If i divides num completely, it is a factor
        if(num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}