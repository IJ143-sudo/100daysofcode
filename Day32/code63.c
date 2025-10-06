//Merge two arrays.



void mergeArrays(int a[], int n1, int b[], int n2, int result[])
 {
    for(int i = 0; i < n1; i++)
        result[i] = a[i];
    for(int j = 0; j < n2; j++)
        result[n1 + j] = b[j];
 }

 int main() 
 {
    int size1, size2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements:\n", size1);
    for(int i = 0; i < size1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements:\n", size2);
    for(int i = 0; i < size2; i++)
        scanf("%d", &arr2[i]);

    int merged[size1 + size2];

    // Call function
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Print merged array
    printf("Merged array:\n");
    for(int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}