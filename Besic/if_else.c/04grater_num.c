#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Four Number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b &&a>c&&a>d)
    {
        printf("%d is grater number\n ",a);

    }
    else if(b>a&&b>c&&b>d)
    {
        printf("%d is grater number",b);
    }
    else if(c>a&&c>b&&c>d)
    {
        printf("%d is grater number\n",c);

    }
    else if(d>a&&d>b&&d>c)
    {
        printf("%d is grtaer number\n",d);
    }
    else if(a==b&&b==c||c==d)
    {
     printf("All are Equll",a,b,c,d);
    }
    
}