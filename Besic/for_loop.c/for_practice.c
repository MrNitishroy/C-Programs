#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter a  number");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of the sereis");
    for(i=1; i<=n; i++)
    {
        if(i!=n)
        printf("%d+",i);
        else
        printf("%d=%d",i,sum);
    }
}