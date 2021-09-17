#include<stdio.h>
int main()
{
    int a,b,s,hcf,i,lcm;
    printf("Enter Two Number=");
    scanf("%d%d",&a,&b);
    if(a<b)
    s=a;
    else
    s=b;
    for(i=1; i<=s; i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
    }
    printf("\n The HCF of the number is=%d",hcf);
    lcm=(a*b)/hcf;
    printf("\n The LCM of given number is =%d",lcm);

}