#include <stdio.h>
//Write a program to swap two numbers without using a third variable.
int main()
 {
    float a, b;

   
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

   
    a = a + b;
    b = a - b;
    a = a - b;

    printf("First number: %f\n", a);
    printf("Second number: %f\n", b);
}