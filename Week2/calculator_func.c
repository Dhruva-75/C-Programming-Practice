#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main()
{
    int a, b,x,c;
    while(x!=5)
    {
    printf("\nCases:\n1-add\n2-sub\n3-mul\n4-div\n5-exit\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1: printf("Enter both value ");
                scanf("%d %d",&a,&b);
                c = add(a,b);
                printf("Ans = %d",c);
        break;
        case 2: printf("Enter both value ");
                scanf("%d %d",&a,&b);
                c = sub(a,b);
                printf("Ans = %d",c);
        break;
        case 3:printf("Enter both value ");
                scanf("%d %d",&a,&b);
                 c = mul(a,b);
                 printf("Ans = %d",c);
        break;
        case 4: printf("Enter both value ");
                scanf("%d %d",&a,&b);
                c = div(a,b);
                printf("Ans = %d",c);
        break;
        case 5: printf("Thank you\n");
        break;
        default:printf("Error");
    }

 }
 return 0;
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
