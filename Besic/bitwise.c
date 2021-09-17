#include<stdio.h>
#define decode(s,t,u,m,p,e,d)  m##s##u##t
#define vikash decode(a,n,i,m,a,t,e)
int vikash()
{
 int a=3,b=6,c;
 printf("\n a=%d",a);
 printf("\n b=%d",b);
 c=a&b;
 // (bitwise AND)
 printf("\n a&b=%d",c);
  c=a|b;
  //(bitwise OR)
  printf("\n a|b=%d",c);
  c=a^b;
  //(bitwise XOR)
  printf("\n a^b=%d",c);
  c=~a;
  //(bitwise NOT)
  printf("\n ~a =%d",c);
  c=a<<3;
 // (left shift)
  printf("\n a<<3=%d",c);
  c=b>>2;
  //(right shift) 
  printf("\n b>>2=%d",c);



}