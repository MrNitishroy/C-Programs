#include<stdio.h>
int main()
{
   int i=5,j;
   while(i>=1)
   {
       j=i;
       while(j>=1)
       {
           printf("%d",i);
           j--;
       }
       printf("\n");
       i--;
   }

}