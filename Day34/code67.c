//Insert an element in an array at a given position.

#include <stdio.h>

int main()
 {
    int n, key, pos;

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element and position
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
     {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for(int i = n - 1; i >= pos - 1; i--) 
    {
        arr[i + 1] = arr[i];
    }

    // Insert the element
    arr[pos - 1] = key;
    n++;  // new size

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}