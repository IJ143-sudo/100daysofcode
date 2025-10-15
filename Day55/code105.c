/*Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
 Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/

 #include <stdio.h>

int main()
 {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

     //Find a candidate for majority
    int candidate = arr[0], count = 1;
    for (int i = 1; i < n; i++)
     {
        if (arr[i] == candidate) count++;
        else count--;

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Verify if candidate is really majority
    count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == candidate) count++;
    }

    if (count > n / 2)
        printf("Majority element: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}