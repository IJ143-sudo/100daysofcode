//Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main()
{
    int n, M=1,digit;
 
       printf("Enter a number: ");   //Input number
       scanf("%d", &n);

       while(n>0)
       {
        digit=n%10;    //Extract Digit
        n=n/10;        //Remove Last Digit

          if (digit%2 !=0)   //condition to check for odd number
        {
          M=M*digit;        //update multiplication
        }  

       }

       printf("%d",M);
       return 0;


}
