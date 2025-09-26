//Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n, i;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    int max = arr[0];
    int min = arr[0];

    // Traverse the array
    for(i = 1; i < n; i++) 
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    // Display result
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}