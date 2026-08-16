#include<stdio.h>
int main()
{
    int i=2,n=3;
    for(;i<=100;i++)
    {
        if(i == n)
        {
            n=n+2;
            continue;
        }
        printf("%d\n",i);
    }
}
