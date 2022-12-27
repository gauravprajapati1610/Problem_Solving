#include<stdio.h>
void main()
{
    int a,i,j,sum=0,d,c=1;
    printf("enter your no.");
    scanf("%d",&a);
    for(i=0;i<c;i++)
    {
        d=a%10;
        sum=sum+d;
        a=a/10;
        if(a!=0)
        {
            c++;
        }
    }
    printf("sum is %d",sum);
}
