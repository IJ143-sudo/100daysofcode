/*write a Program to take an integer array nums.
 Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Input array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product of all elements except nums[i]
    for (int i = 0; i < n; i++) 
    {
        int product = 1;
        for (int j = 0; j < n; j++) 
        {
            if (i != j) 
                product *= nums[j];
            
        }
        answer[i] = product;
    }

    // Print the result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}