/*Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>

int main()
 {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int seen[n+1];   // to track visited elements
    for(i = 0; i <= n; i++)
        seen[i] = 0; // initialize

    printf("Enter %d elements: ", n);
    
    int repeated = -1;

    // Single iteration for input + checking
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);

        if(seen[arr[i]] == 1) 
           repeated = arr[i];
         else 
            seen[arr[i]] = 1;
    }

    printf("Repeated element is: %d", repeated);

    return 0;
}