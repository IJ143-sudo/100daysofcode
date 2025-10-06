//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};  // Frequency array for digits 0-9
    int digit, maxCount = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%ld", &num);


    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    // Find maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount)
            maxCount = count[i];
    }

    // Print all digits that have the maximum frequency
    printf("Digit(s) occurring the most (%d times): ", maxCount);
    for(int i = 0; i < 10; i++) {
        if(count[i] == maxCount)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
