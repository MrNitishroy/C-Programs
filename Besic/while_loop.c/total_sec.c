#include<stdio.h>
int main()
{
    int ts,h=0,m=0,s;
    printf("Enter total sec");
    scanf("%d",&ts);
    while(ts>=60)
    {
        m++;
        while(m>=60)
        {
            h++;
            m=m-60;

        }
        ts=ts-60;
    }
    printf("\n HH:MM:SS=%d:%d:%d",h,m,ts);
}