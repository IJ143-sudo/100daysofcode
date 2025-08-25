//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit with error code
    }


    sum = n * (n + 1) / 2;

    
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}