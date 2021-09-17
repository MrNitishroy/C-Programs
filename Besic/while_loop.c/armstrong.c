#include<stdio.h>
int main()
{
    int  n,s,sum=0,temp;
    printf("Enter a number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        s=n%10;
        sum=sum+(s*s*s);
        n=n/10;

    }
    if(sum==temp)
    {
        printf("Number is armstring");

    }
    else
    {
        printf("Number is not armstring");

    }

}
