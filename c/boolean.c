#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2],i,j;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            a[i][j]=i*j;
            b[i][j]=i+j;
            if(b[i][j]>1)
                b[i][j]=1;
        }
        if(i==0)
            c[i]=1;
        else
            c[i]=0;

    }
printf("\nAND Gate( && ):-\n");
for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("%d  %d  :%d\n",i,j,a[i][j]);
   }
 }
 printf("\nOR Gate( || ):-\n");
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("%d %d :%d\n",i,j,b[i][j]);
   }
 }
 printf("\nNOT Gate (!):-\n");
 for(i=0;i<=1;i++)
 {
   printf("%d :%d\n",i,c[i]);
 }
}
