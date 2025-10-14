/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.*/

 #include<stdio.h>
 int main()
 {
    int target,n;

    printf("Enter size for array: ");
    scanf("%d", &n);

    int arr[n];
    //input array elements
    printf("Enter %d elements(ascending order): ", n);
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);


    printf("Enter the target number: ");
    scanf("%d", &target);

     int first = -1, last = -1;
    
    
    for(int i = 0, j = n - 1; i <= j; i++, j--)
     {
        if(arr[i] == target && first == -1)
            first = i;   // first occurrence from left
        if(arr[j] == target && last == -1)
            last = j;    // last occurrence from right
        
        // Stop early if both found
        if(first != -1 && last != -1)
            break;
    }
    
    if(first == -1)
        printf("-1, -1\n");
    else
        printf("%d,%d", first, last);

        




    
 }