#include<stdio.h>
void main()
{
    int a[100],n,i,j,l;
    printf("enter the no. of elements   ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d elements ",i+1);
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("the largest no. is %d \n ",l);
    printf(" Gaurav Prajapati \n 21000321530070");
}
