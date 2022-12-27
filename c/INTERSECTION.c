#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,k,n,n1,n2;
    printf("Enter the no. of elements in 1st set ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("Enter the %d element ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the no. of elements in 2nd set ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("Enter the %d element ",i+1);
        scanf("%d",&b[i]);
    }
    n=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[n]=a[i];
                n++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(c[i]==c[j])
            {
                for(k=j;k<n;k++)
                {
                    c[k]=c[k+1];
                    n--;
                }
            }
            else
                j++;

        }
    }
    printf("Intersection of sets is \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",c[i]);
    }
}
