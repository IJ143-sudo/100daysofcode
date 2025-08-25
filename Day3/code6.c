//Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main() {
    float a, b, temp;

   
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    
    temp = a;
    a = b;
    b = temp;

    
    printf("First number: %f\n", a);
    printf("Second number: %f\n", b);

    return 0;
}