#include<stdio.h>
int main()
{
    long int n,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        s=n+s;
        n--;
    }

    printf("Sum=%d",s);

}