#include <stdio.h>
//Write a program to input two numbers and display their sum, difference, product, and quotient.

int main() {
    float num1, num2;  
    float sum, difference, product, quotient;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    
    printf("\nResults:\n");
    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", difference);
    printf("Product: %f\n", product);

    // Check division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %f\n", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}