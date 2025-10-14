/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
 This element is called the ceil of x. If such an element does not exist, print -1.
 Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

 #include <stdio.h>

int main()
 {
    int n, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    int i = 0, j = n - 1;
    int ceil= -1;

    while(i<= j)
     {
        int mid = (i + j) / 2;
        
        if(arr[mid] >= x) 
        {
            ceil = mid;   // potential ceil found
            j = mid - 1;    // check left side for smaller index
        } else 
            i= mid + 1;     // move right, as mid < x
        
    }
    printf("%d\n", ceil);
    
    return 0;
}