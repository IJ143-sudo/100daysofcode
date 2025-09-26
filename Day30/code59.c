//Count even and odd numbers in an array.

#include <stdio.h>

int main()
 {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int countE = 0, countO = 0;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
        // Check if the number is even or odd
        if(arr[i] % 2 == 0) 
            countE++;
            else 
             countO++;
        
    }

    printf("Number of even numbers: %d\n", countE);
    printf("Number of odd numbers: %d\n", countO);

    return 0;
}