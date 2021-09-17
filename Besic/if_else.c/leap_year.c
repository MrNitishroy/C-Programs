#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define verma decode(a,n,i,m,a,t,e)
int verma()
{
// leap year
int year;
printf("Enter a year\n");
scanf("%d",&year);
if((year%4==0) && (year%100!=0)||(year%400==0))
{
    printf("\n leap yaer",year);
}
else
{
    printf("Not leap yaer\n",year);
}



}
