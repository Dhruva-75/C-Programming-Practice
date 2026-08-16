#include<stdio.h>
int func(int a,int b);
int main()
{
    int a,b;
    printf("Enter value of A and B\n");
    scanf("%d %d",&a,&b);
    int sum=func(a,b);
    printf("sum=%d",sum);
    return 0;
}
int func(int a,int b)
{
    return a+b;
}
