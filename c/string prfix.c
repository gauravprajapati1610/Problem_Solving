#include<stdio.h>
void frequency(char*);
void main()
{
    char str[10],x;
    printf("Enter the string ");
    scanf("%s",str);
    frequency(str);
}
void frequency(char*p)
{
    int a=0,i,b;
    while(*p!='\0')
    {
         b=0;
     for(i=65;i<=91;i++)
     {
        if(*p==i)
        {
            b++;
        }
        printf("a");
         if(b!=0)
    {
        printf("frequency of %c in string is %d",i,b);
    }
     }

        a++;
        p++;
    }


}

