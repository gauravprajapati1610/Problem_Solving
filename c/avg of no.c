#include<stdio.h>
void main()
{
    int n,sum=0,i,a[100];
    float avg;
    printf(" Gaurav Prajapati \n 21000321530070\n");
    printf("Enter the no. of students in class  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the %d element ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("The average of class %.3f",avg);
}
