/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right.
 If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

 #include <stdio.h>

int main()
 {
    int n, k;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input window size
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0){
        printf("Invalid window size.\n");
        return 0;
    }

    // Process all windows
    for(int i = 0; i <= n - k; i++)
    {
        int negative = 0;  // default if no negative in window

        // Scan current window
        for(int j = i; j < i + k; j++){
            if(arr[j] < 0)
            {
                negative = arr[j];
                break; // first negative found
            }
        }

        printf("%d ", negative);
    }

    return 0;
}
