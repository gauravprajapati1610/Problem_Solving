#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,n1,n2,n3,n4;
    printf("Gaurav Prajapati \n 2100321530070\n");
    printf("enter the order of matrix A ");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("enter the order of matrix B ");
    scanf("%d%d",&n3,&n4);
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    if(n1==n3&&n2==n4)
    {
        printf("Addition of matrix is \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Addition is not possible");
    if(n2==n3)
    {
      printf("Product of matrix is \n");
      for(i=0;i<n1;i++)
      {
          for(j=0;j<n2;j++)
          {
              c[i][j]=0;
              for(k=0;k<n4;k++)
              {
                  c[i][j]+=a[i][k]*b[k][j];
              }
              printf("%d\t",c[i][j]);
          }
          printf("\n");
      }}else
        printf("Multiplication is not possible");
}
