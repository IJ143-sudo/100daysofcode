//Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;   // exit immediately if divisor found
        }
    }

    printf("%d is a prime number.\n", num);

    return 0;
}