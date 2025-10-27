/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth smallest element as output.*/

#include <stdio.h>

int main()
 {
    int n, k;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n){
        printf("Invalid value of k.\n");
        return 0;
    }

    // Sort the array using simple bubble sort
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // kth smallest element is at index k-1
    printf("The %dth smallest element is: %d\n", k, arr[k-1]);

    return 0;
}
