//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
 {
    int n, i;
    long long product = 1; // use long long for large values
    int hasEven = 0;       // to check if there are even numbers

    
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Multiply even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in range 1 to %d\n", n);

    return 0;
}