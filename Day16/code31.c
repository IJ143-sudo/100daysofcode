#include <stdio.h>

int main() {
    //Write a program to take a number as input and print its equivalent binary representation.


    int num;
    double binary = 0;
    double place = 1; // position (1, 10, 100, ...)

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0)
    {
        int remainder = num % 2;
        binary = remainder * place + binary; // add digit at correct place
        num = num / 2;
        place = place * 10; // move to next binary digit position
    }

    printf("Binary: %lf\n", binary);

    return 0;
}