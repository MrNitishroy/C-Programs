#include<stdio.h>
int main()
{
 int year;
 printf("Enter a number");
 scanf("%d",&year);
 if((year%4==0)&&(year%100!=0)||(year%400==0))
 {
     printf("Leap year");
 }
 else
 {
     printf("Not leap year");
 }

}