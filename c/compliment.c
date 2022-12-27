#include<stdio.h>
void main()
{
    int j,u[10],a[10],a1[10],i,n1,n2,c=0,k;
    printf("enter the no. of elements in universal set");
    scanf("%d",&n1);
    printf("enter the universal set");
    for(i=0;i<n1;i++)
    {
        printf("enter %d element",i+1);
        scanf("%d",&u[i]);
    }
    printf("enter the no. elements in set A ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter %d element in set A",i+1);
        scanf("%d",&a[i]);
    }
    for(i=c;i<n1;c++)
    {
        for(j=0;j<n2;j++)
        {
            if(u[i]==a[j])
            {
                for(k=0;k<=n1;k++)
                {
                    u[i]=u[i+1];
                }
                c--;
                n1--;
            }
        }
    }
    printf("complement of A is");
    for(i=0;i<n1;i++)
    {
        printf("%d ",u[i]);
    }

}
