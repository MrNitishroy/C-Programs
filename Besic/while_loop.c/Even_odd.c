#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d Is even \n",i);

        }
        else{
            printf("%d Is Odd\n",i);

        }
        i++;
        
    }
}