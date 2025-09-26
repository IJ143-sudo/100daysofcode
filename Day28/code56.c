//Read and print elements of a one-dimensional array.

#include<stdio.h>

int main()
{
    int size;

    printf("Enter size for array: ");
    scanf("%d", &size);

    int arr[size];

    //loop to read elements into the array
     for(int i=0; i<size;i++)
      { printf("enter the element %d: ", i+1);
       scanf("%d", &arr[i]);
      }
          //printing the array
      printf("\nElements in the array are: ");
      for(int i=0; i<size; i++)
       printf("%d ",arr[i]);

       return 0;

}