#include<stdio.h>
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
                c = a+b;
                printf("Ans = %d",c);
        break;
        case 2: printf("Enter both value ");
                scanf("%d %d",&a,&b);
                c = a-b;
                printf("Ans = %d",c);
        break;
        case 3:printf("Enter both value ");
                scanf("%d %d",&a,&b);
                 c = a*b;
                 printf("Ans = %d",c);
        break;
        case 4: printf("Enter both value ");
                scanf("%d %d",&a,&b);
                c = a/b;
                printf("Ans = %d",c);
        break;
        case 5: printf("Thank you\n");
        break;
        default:printf("Error");
    }

 }
 return 0;
}
