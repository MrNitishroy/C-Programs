#include<stdio.h>
int main()
{
    int i=8,j;
    while(i>=1)
    {
        j=i;
        while(j<=8)
        {
            printf("%d",i);
            j++;

        }
        printf("\n");
        i--;

    }
}