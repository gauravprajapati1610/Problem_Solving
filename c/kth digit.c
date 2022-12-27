#include<stdio.h>
void main()
{
    int a,b,k,i,d;
    printf("enter the first no.");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    for(i=1;i<b;i++)
    {
        a=a*a;
    }
    printf("enter the position of digit");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        d=a%10;
        a=a/10;
    }
    printf("%d is the digit at the given position",d);
}
