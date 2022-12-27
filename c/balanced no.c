#include<stdio.h>
void main()
{
     int sum1=0,sum2=0,a,b,k,i,d,n,c=1;
     printf("enter the odd digit no.  ");
     scanf("%d",&n);
     a=n;
     for(i=0;i<c;i++)
     {
         n=n/10;
         if(n!=0)
         {
             c++;
         }
     }
     printf("%d are the no of digits \n",c);
     for(i=1;i<=c;i++)
     {
         if(i<=c/2)
         {
           b=a%10;
           sum1=sum1+b;
           a=a/10;
         }
         else if(i>(c/2+1))
         {
             b=a%10;
             sum2=sum2+b;
             a=a/10;
         }
         else
         {
             b=a%10;
             a=a/10;
             printf("%d is the middle no. \n",b);
         }
     }
     printf("%d is the sum of digits after the middle digit \n",sum1);
     printf("%d is the sum of digits before the middle digit \n",sum2);
     if(sum1==sum2)
     {
         printf("the sum of digits before and after the middle digit is equal so it is a balanced no.");
     }
}
