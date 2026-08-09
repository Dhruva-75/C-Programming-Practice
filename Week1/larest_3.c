#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a,b & c\n");
    scanf("%d\n%d\n%d",&a, &b, &c);
    if(a>b && a>c)
            printf("Largest No = %d",a);
    else if(b>a && b>c)
            printf("Largest No = %d",b);
    else
        printf("Largest No = %d",c);
}
