//Write a program to find the sum of digits of a number.

#include<stdio.h>
int main()
{
    int n, sum=0, digit;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n>0)
    {
        digit=n % 10;   //Extact last digit
        sum=sum+digit;  
        n= n/10;       //Remove last digit
    }
    
    printf("Sum of digits = %d\n", sum);

    return 0;

}