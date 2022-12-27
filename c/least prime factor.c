#include<stdio.h>
void main()
{
    int n,i,j,a,b[100],c,d=0;
    printf("enter the nno. whose least prime factor is to be found");
    scanf("%d",&n);
    for(i=2;i<=(n/2+1);i++)
    {
        a=n%i;
        if(a==0)
        {
          for(j=2;j<=i/2;j++)
          {
              c=i%j;
              if(c==0)
              {
                  d++;
              }
          }
          if(d==0)
          {
              printf("%d is the smallest prime factor of %d",i,n);
              break;
          }
        }
    }

}
