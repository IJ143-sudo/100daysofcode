//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main()
 {
    int a, b, i, hcf;

   
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Decide which number is smaller and use it directly in loop
    if(a < b) 
    {
        for(i = 1; i <= a; i++) 
        {
            if(a % i == 0 && b % i == 0)
             {
                hcf = i;      // update hcf whenever a common factor is found
            }
        }
    }
     else 
    {
        for(i = 1; i <= b; i++)
         {
            if(a % i == 0 && b % i == 0) 
            {
                hcf = i;
            }
        }
    }

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}