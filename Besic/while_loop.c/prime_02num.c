#include<stdio.h>
int main()
{
  int i=1,n,c=0;
  printf("Enter a number=");
  scanf("%d",&n);
  while(i<=n)
  {
      if(n%i==0)
      {
          c++;
      }
      i++;
  }
  if(c==2)
  {
      printf("N is prime Number");
  }
  else
  {
      printf("N is not a prime number");
  }
}