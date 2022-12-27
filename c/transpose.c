#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("Gaurav Prajapati \n 2100321530070\n");
    printf("enter the order of matrix A ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("Transpose of matrix is\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
