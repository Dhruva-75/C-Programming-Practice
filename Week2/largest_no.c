#include<stdio.h>
int large(int arr[]);
int main()
{
    int arr[20]={1,2,4,6,3,8,3,6,6,4,3};
    int l=large(arr);
    printf("Largest element = %d",l);
    return 0;
}
int large(int arr[])
{
    int a=arr[0];
    for(int i=1;i<20;i++)
    {
        if(arr[i]>a)
            a=arr[i];
    }
    return a;
}
