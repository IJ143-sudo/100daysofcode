//Search for an element in an array using linear search.

#include <stdio.h>

int main()
 {
    int n, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &num);

    printf("Element %d found at positions: ",num);
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == num)
         {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if(!found)
        printf("Not found.");

    printf("\n");
    return 0;
}