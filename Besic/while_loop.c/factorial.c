#include<stdio.h>
int main()
{
    long int a,m=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    while(a>0)
    {
        m=a*m;
        a--;
    
    }
    printf("Factorial=%d",m);
  
}