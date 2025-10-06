//Delete an element from an array.

#include <stdio.h>

int main() 
{
    int n, pos;

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input position to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
     {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left
    for(int i = pos - 1; i < n - 1; i++)
     {
        arr[i] = arr[i + 1];
    }

    n--;  // new size

    // Print updated array
    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    printf("\n");

    return 0;
}