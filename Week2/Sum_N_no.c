#include<stdio.h>
int main()
{
    int n, a,re=0,r;
    printf("Enter the No.\n");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
       r=n%10;
       re=re*10+r;
       n/=10;
    }
    if(re==a)
        printf("The given no. is Palindrom\n");
    else
        printf("The given no. is not Palindrom\n");
    return 0;
}
