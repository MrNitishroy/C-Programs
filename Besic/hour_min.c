#include<stdio.h>
int main()
{
    int h,m,s,ts;
    printf("Enter a time\n");
    scanf("%d",&ts);
    h=ts/60;
    printf("hour=%d",h);
    m=ts%60;
    printf("Mint=%d",m);
  

}