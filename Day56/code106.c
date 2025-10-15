/*Write a program to take an array arr[] of integers as input,
 the task is to find the next greater element for each element of the array in order of their appearance in the array.
  Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
If there does not exist next greater of current element, then next greater element for current element is */

#include <stdio.h>

int main() 
{
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    //Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    // Find Next Greater Element for each element
    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++)
     {
        int next = -1; // Default if no greater element is found

        // Check elements to the right of arr[i]
        for (int j = i + 1; j < n; j++)
         {
            if (arr[j] > arr[i]) 
            {
                next = arr[j]; // Found next greater
                break;         // Stop at the first greater element
            }
        }

        // Print the next greater element
        printf("%d", next);

        // Print comma if not the last element
         if (i != n - 1) 
            printf(", ");
        
    }

    return 0;
}