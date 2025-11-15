/*Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>

int main() 
{
    int n, sum=0, total;
    
    // Take input size 
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];  // sum of array elements
    }

    // total sum of numbers from 0 to n
    total = n * (n + 1) / 2;

    printf("Missing number is: %d", total - sum);
    
    return 0;
}