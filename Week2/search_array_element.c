#include<stdio.h>
#define N 5
int main()
{
    int arr[N],x;
    printf("Enter array elements\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search element\n");
    scanf("%d",&x);
    for(int j=0;j<N;j++)
    {
        if(x==arr[j])
        {
           printf("Element found\n");
           return 0;
        }
    }
    printf("Element Not found\n");
    return 0;
}

