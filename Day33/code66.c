//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main()
 {
    int n, key, i, j;

    // Input size of array
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    // Input sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find correct position and shift elements
    i = n - 1;
    while(i >= 0 && arr[i] > key) 
    {
        arr[i + 1] = arr[i];  // shift element to the right
        i--;
    }

    // Insert the key
    arr[i + 1] = key;
    n++;  // new size

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}