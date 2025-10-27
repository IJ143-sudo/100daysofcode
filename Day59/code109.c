//

#include <stdio.h>

int main() 
{
    int n, k;

    // Input array size and subarray size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Edge case check
    if (k > n || k <= 0) 
    {
        printf("Invalid subarray size.\n");
        return 0;
    }

    int currentSum = 0, maxSum = 0;

    //calculate  sum till k size 
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    //keep adding new element and remove one previous element
    for (int i = k; i < n; i++) 
    {
        currentSum += arr[i] - arr[i - k]; // add next element, remove first 
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    // Print result
    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum);

    return 0;
}