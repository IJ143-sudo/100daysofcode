//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("prime numbers between 1 and  %d are:\n ", n);

    for (int i = 2; i <= n; i++) 
    {  
          int count = 0;                 // count of divisors
        for (int j = 1; j <= i; j++)   // check all numbers up to i
         { 
            if (i % j == 0)
                count++;            // found a divisor
        }
        
        if (count == 2) 
          printf("%d ", i);
                    
    }
  
    return 0;
}
