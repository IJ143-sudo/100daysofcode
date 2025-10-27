/*Write a program to take an array arr[] of integers as input, 
the task is to find the previous greater element for each element of the array in order of their appearance in the array.
 Previous greater element of an element in the array is the nearest element on the left which is greater than the current element.
  If there does not exist next greater of current element, then previous greater element for current element is -1.*/

  #include<stdio.h>
  int main()
  {
     int n;
     printf("Enter size for array: ");
     scanf("%d", &n);

     int arr[n];
     int result[n];
     printf("Enter %d elements for array",n);

     for(int i=0;i<n;i++)
     scanf("%d", &arr[i]);

     //calculating previous greater element
     for (int i=0;i<n;i++)
     {
        int def = -1;  // default if no greater element exists
        for(int j = i - 1; j >= 0; j--)
         {
            if(arr[j] > arr[i])
             {
                def = arr[j];
                break;  // found the nearest greater element on left
            }
        }
        result[i] = def;
    }

    // Print the result
    printf("Previous greater elements: ");
    for(int i = 0;i < n;i++) 
        printf("%d ", result[i]);
    

    return 0;
}
