//lcm of two numbers
#include <stdio.h>

int main() 
{
    int a,b ,start, lcm, i;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    // Start from the larger number
    if (a > b)
     {
        start = a;
     }
     else
    {
      start = b;
    }

    // Check numbers only up to a * b
    for (i = start; i <= a * b; i++)
     {
        if (i % a == 0 && i % b == 0)
         {
            lcm = i;
            break;   // stop as soon as we find the first common multiple
        }
    }

    printf("LCM  is %d\n",  lcm);

    return 0;
}

