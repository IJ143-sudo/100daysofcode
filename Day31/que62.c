//Reverse an array without taking extra space.

#include <stdio.h>

int main()
 {
    int size, i, temp;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Reverse the array in place (no extra array)
    for(i = 0; i < size/2; i++)
     {
        temp = arr[i];    
        arr[i] = arr[size-i-1];   //swapping value of last index to first index
        arr[size-i-1] = temp;    //similarly value of first to last
    }

    // Print reversed array
    printf("Reversed array:\n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}