//ount positive, negative, and zero elements in an array.
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int countp = 0, countn = 0, count0 = 0;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) 
            countp++;
        else if(arr[i] < 0) 
            countn++;
        else 
            count0++;
        
    }

    printf("Number of positive elements: %d\n", countp);
    printf("Number of negative elements: %d\n", countn);
    printf("Number of zeros: %d\n", count0);

    return 0;
}