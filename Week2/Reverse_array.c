#include<stdio.h>
#define N 5
int main()
{
    int arr[N];
    printf("Enter array elements\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse array : ");
    for(int j=N-1;j>=0;j--)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}

