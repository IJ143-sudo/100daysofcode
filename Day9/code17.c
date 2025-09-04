//rite a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    float a, b, c, D, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant (b^2 - 4ac)
    D = b * b - 4 * a * c;

    // Check conditions
    if (D > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are Real and Distinct:\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    }
    else if (D == 0) {
        // Two equal real roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are Real and Equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-D) / (2 * a);
        printf("Roots are Imaginary (Complex):\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}