#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter a +ve no. between 1 to 50\n");
    scanf("%d",&a);
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
    return 0;
}
