//Find the sum of array elements. 

#include <stdio.h>

int main()
 {
    int n,  sum = 0;

    // Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    // Calculate sum
    for (int i = 0; i < n; i++) 
        sum += arr[i];
    
    printf("Sum of array elements = %d\n", sum);

    return 0;
}