//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Single digit stays same
    if (n < 10) {
        printf("Number after swapping: %d\n", n);
        return 0;
    }

    // find first digit and power
    int temp = n;
    int power = 1;
    while (temp >= 10) {    // more than one digit
        temp /= 10;
        power *= 10;
    }
    int first = temp;       // first digit
    int last = n % 10;      // last digit

    // directly swap
    n = n - first * power - last;  // remove original first and last
    n = n + last * power + first;  // add swapped first and last

    printf("Number after swapping: %d\n", n);
    return 0;
}