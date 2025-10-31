/*Write a program to take two sorted arrays of size m and n as input.
 Merge both the arrays such that the merged array is also sorted. Print the merged array.*/

 #include <stdio.h>

int main()
 {
    int m, n;
    
    // Take size of first array
    printf("Enter size of first array: ");
    scanf("%d", &m);
    
    int arr1[m];
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < m; i++) 
        scanf("%d", &arr1[i]);

    // Take size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n);
    
    int arr2[n];
    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr2[i]);

    int merged[m + n];  // array to store the merged result
    int i = 0, j = 0, k = 0;

    // Merge both arrays while maintaining sorted order
    while(i < m && j < n)
     {
        if(arr1[i] < arr2[j]) 
            merged[k++] = arr1[i++];
         else 
            merged[k++] = arr2[j++];
    }
    // Copy remaining elements of arr1 (if any)
    while(i < m) 
        merged[k++] = arr1[i++];

    // Copy remaining elements of arr2 (if any)
    while(j < n)
        merged[k++] = arr2[j++];

    // Print the merged sorted array
    printf("Merged sorted array: ");
    for(int x = 0; x < m + n; x++) 
        printf("%d ", merged[x]);
    printf("\n");
    return 0;
}