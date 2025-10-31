/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
 The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
  Assume exactly one solution exists and return the indices in any order.
   Print the two indices separated by a space as output.
   If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main()
 {
    int n, target;
    
    // Ask user for the size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    
    // Take input for array elements
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Take input for the target sum
    printf("Enter the target value: ");
    scanf("%d", &target);

    int found = 0; // flag to check if we find the pair

    // Check each pair of elements
    for(int i = 0; i < n; i++)
     {
        for(int j = i + 1; j < n; j++) 
        {
            if(nums[i] + nums[j] == target)
             {
                // Print the indices if sum matches the target
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    // If no such pair found
    if(!found)
        printf("-1 -1\n");

    return 0;
}