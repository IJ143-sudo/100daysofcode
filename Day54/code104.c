/*Write a Program to take a positive integer n as input, and find the pivot integer x such that
 the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    long long n;

    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    //  Calculate the total sum of numbers from 1 to n
    // Formula: sum(1..n) = n * (n + 1) / 2
    long long total = n * (n + 1) / 2;

    // This is based on the derived formula: pivot x exists if x^2 = total
    // 'sqrt()' returns a double, so we cast it to long long to store as integer
    long long x = (long long) sqrt(total);

    //  Check if the square of x equals the total sum
    // If true, then 'x' is the pivot integer
    if (x * x == total)
        printf("Pivot integer is: %lld\n", x);  // Print the pivot
    else
        printf("-1\n");  // If no pivot exists, print -1

    return 0;
}