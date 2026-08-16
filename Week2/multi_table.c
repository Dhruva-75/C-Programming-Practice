#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    b=a;
    for(int i=1;i<11;i++)
    {
        b=a*i;
        printf("%d x %d = %d\n",a,i,b);
    }
}
