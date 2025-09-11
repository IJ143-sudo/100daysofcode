//Write a program to check if a number is a strong number.

#include<stdio.h>
int main()
{
    int n, digit, i,  sum=0;

    printf("Enter a number");
    scanf("%d",&n);

    int temp=n;

    while (temp > 0)
    {
        digit= temp % 10; //extracting digits
       
         int factorial=1;
        for(i=1; i <= digit;i++)  // loop to find factorial of the digit
        {
           factorial=factorial * i;
           
        }
          
          sum=sum+factorial;   //sum of the factorials
          temp=temp/10;        //removing last digit

    }
      if(sum==n)
      printf("Strong Number");
      else
      printf("NOT a strong number");

      return 0;

}