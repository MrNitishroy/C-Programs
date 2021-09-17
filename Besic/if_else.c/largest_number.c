#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any Three numberr\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%dIt is largest number\n",a);
        
    }
    if(b>c&&b>a)
    {
        printf("%d It is largest number\n",b);

    }
    if(c>a&&c>b)
    {
        printf("%d It is largest number\n",c);
        }
    if(a==b&&a==c)
    {
        printf("%d All are Equel");

    }
}