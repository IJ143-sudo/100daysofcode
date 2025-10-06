//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, key;
    
    // Input size of array
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    // Binary search
    while(low <= high)
     {
        mid = (low + high) / 2;

        if(arr[mid] == key) 
        {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}