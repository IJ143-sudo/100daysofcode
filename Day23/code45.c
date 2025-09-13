//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

int main()
 {
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++)
     {
        int num = 2 * i;               // numerator
        int den = 3 + 4 * (i - 1);     // denominator

        printf("%d/%d", num, den);     // print current term as fraction
        if (i < n) printf(" + ");      // print plus sign except after last term

        sum += (float)num / den;       // add to sum
    }

    printf("Sum of series up to %d terms = %.2f", n, sum);

    return 0;
}