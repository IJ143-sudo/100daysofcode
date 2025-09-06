//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, org, rem, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        result += pow(rem, n);
        temp /= 10;
    }

    if ((int)result == org)
        printf("%d is an Armstrong number.\n", org);
    else
        printf("%d is not an Armstrong number.\n", org);

    return 0;
}