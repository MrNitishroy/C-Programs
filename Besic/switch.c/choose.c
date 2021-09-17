#include<stdio.h>
#define decode(s,t,u,m,p,e,d)  m##s##u##t
#define vikash decode(a,n,i,m,a,t,e)
int vikash()
{
   printf("Choose A Number\n");
   printf("1.Add.\n2.Substract.\n3.Multiply\n4.Divide\n5.Reminder\n ");
   int t,s,all;
   scanf("%d",&all);
   switch (all)
   {
   case 1:
       printf("Welcome to Choose  Add \n");
       printf("Enter Two Number\n");
       scanf("%d%d",&t,&s);
       printf("Your Answer is=%d",t+s);
       break;
       case 2:
       printf("Welcome to Choose Substract\n");
       printf("Enter Two Number\n");
       scanf("%d%d",&t,&s);
       printf("Your Answer is=%d",t-s);
       break;
       case 3:
       printf("Welcome to Choose Muliply \n");
       printf("Enter Two Number\n");
       scanf("%d%d",&t,&s);
       printf("Your Answer is=%d",t*s);
       break;
       case 4:
       printf("Welcome to Choose Division\n");
       printf("Enter Two Number\n");
       scanf("%d%d",&t,&s);
       printf("Your Answer is=%d",t%s);
       break;
       case 5:
       printf("Welcome to Choose Reminder\n");
       printf("Enter Two Number\n");
       scanf("%d%d",&t,&s);
       printf("Your Answer is=%d",t/s);
       break;

   
   default:
   printf("Plz Inter correct option");
       break;
   }
}