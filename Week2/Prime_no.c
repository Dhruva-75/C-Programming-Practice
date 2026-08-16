#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter a no.\n");
    scanf("%d",&n);
    if(n<=1)
    {
        a=0;
    }
    else
    {
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                a=0;
                break;
            }
        }
    }
    if(a==1)
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
}
