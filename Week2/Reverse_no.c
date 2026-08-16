#include<stdio.h>
int main()
{
    int n,re=0,r;
    printf("Enter the No.\n");
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       re=re*10+r;
       n/=10;
    }
    printf("Reverse no. = %d",re);
    return 0;
}
