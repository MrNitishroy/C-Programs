#include<stdio.h>
int main()
{
    int n,i,r;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        r=n*i;
        printf("%dx%d=%d\n",n,i,r);
    }

}