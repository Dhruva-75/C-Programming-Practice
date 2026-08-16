#include <stdio.h>
#define N 5
int main()
{
    int arr[N];
    int largest, secondLargest;
    printf("Enter %d array elements:\n", N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    secondLargest = arr[0];
    for(int i = 1; i < N; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);
    return 0;
}
