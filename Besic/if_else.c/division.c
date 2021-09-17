#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define vikash decode(a,n,i,m,a,t,e)
int vikash()
{
  int marks;
  printf("Enter your marks\n");
  scanf("%d",&marks);
  if(marks>299 && marks<=500)
  {
    printf("congrats! You are first Division");
  }
else if (marks>224 &&marks<300)
{
  printf("You are second division\n");

}
else if(marks>149 && marks<245)
{
  printf("you are third division\n");

}
else
{
  printf("Sorry, You are Fail.");
}
  
  
}

