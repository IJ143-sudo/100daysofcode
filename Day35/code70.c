//Rotate an array to the right by k positions.

#include <stdio.h>

int main()
 {
    int n, k, temp;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input k
    printf("Enter k (positions to rotate right): ");
    scanf("%d", &k);

    k = k % n;  // in case k > n

    // Rotate right k times
    for(int i = 0; i < k; i++)
     {
        temp = arr[n - 1];  // store last element
        for(int j = n - 1; j > 0; j--)
         {
            arr[j] = arr[j - 1];  // shift right
        }
        arr[0] = temp;  // place last element at start
    }

    // Print rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}