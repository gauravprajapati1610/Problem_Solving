#include<stdio.h>
#include<math.h>
void main()
{
    int r,area,side;
    printf("enter the radius of circle");
    scanf("%d",&r);
    side=(r*2)/sqrt(2);
    area=side*side;
    printf("side of largest rectangle %d\n",side);
    printf("area of largest rectangle %d",area);
}
