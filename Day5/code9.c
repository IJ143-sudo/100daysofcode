//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() 
{
   double P,R,T;
   double SI=(P*R*T)/100.0;
   double CI= P*(pow((1+R/100.0),T))-P;

    printf("enter principal P: ");
    scanf("%lf", &P);

    printf("enter R: ");
    scanf("%lf", &R);

    printf("enter T: ");
    scanf("%lf", &T);

    printf("SI=%lf\n", SI);
    printf("CI=%lf", CI);
     






return 0;
    
}
