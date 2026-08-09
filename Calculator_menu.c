#include<stdio.h>
int main()
{
    int a, b,x,c;
    printf("Enter 1st value ");
    scanf("%d",&a);
    printf("Cases:\n1-add\n2-sub\n3-mul\n4-div\n");
    scanf("%d",&x);
    printf("Enter 2nd value ");
    scanf("%d",&b);
    switch(x)
    {
        case 1: c = a+b;
        break;
        case 2: c = a-b;
        break;
        case 3: c = a*b;
        break;
        case 4: c = a/b;
        break;
        default:printf("Error");
    }
    printf("Ans = %d",c);
}
