//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
 {
    int n, i;
    float sum = 0.0;
    int num = 1;   // starting numerator
    int den = 1;   // starting denominator

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) 
    {
        float term;
        if (i == 1) 
        {
            term = 1;  // first term = 1
            printf("1");
            num = 3;     // set up for next term
            den = 4;
        } else 
        {
            term = (float)num / den;
            printf(" + %d/%d", num, den);
            num += 2;  // next numerator
            den += 2;  // next denominator
        }
        sum += term;
    }

    printf("\nSum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}