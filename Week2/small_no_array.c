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
    int s=arr[0];
    for(int j=1;j<N;j++)
    {
        if(s > arr[j])
            s=arr[j];
    }
    printf("Smallest no. : %d\n",s);
    return 0;
}
