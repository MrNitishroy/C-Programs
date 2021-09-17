#include<stdio.h>
int main()
{
    int j=1;
    while(j+=2,j<=30)
    {
        printf(" %d ",j);
    }
    printf(" %d ",j);
}