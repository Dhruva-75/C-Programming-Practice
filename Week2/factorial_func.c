#include<stdio.h>
int fact(int a);
int main()
{
    int a,b;
    printf("Enter value\n");
    scanf("%d",&a);
    int f=fact(a);
    return 0;
}
int fact(int a)
{
    int b=1;
    if(a>0&&a<=50)
    {
        for(int i=1;i<=a;i++)
        {
            b=b*i;

        }
        printf("Factorial of %d = %d",a,b);
    }
    else if(a==0)
    {
        printf("Factorial of 0 = 1");
    }
    else
    {
        printf("Invalid no.\n");
    }
    return b;
}
