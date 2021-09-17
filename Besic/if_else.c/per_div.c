#include<stdio.h>
int main()
{

    float math,phy,che, eng,hindi,total,per;
    printf("Enter the maths marks=\n");
    scanf("%f",&math);
    printf("Enter the Physics marks=\n");
    scanf("%f",&phy);
    printf("Enter the chemistry marks=\n");
    scanf("%f",&che);
    printf("Enter the English marks=\n");
    scanf("%f",&eng);
    printf("Enter the Hindi marks=\n");
    scanf("%f",&hindi);
    total=math+phy+che+eng+hindi;
    printf("Total =%f\n",total);
    per=total/5;
    printf("Percentage is=%f",per);
   if(per>59 && per<=100)
  {
    printf("\nCongrats! You are first Division");
  }
else if (per>44 && per<60)
{
  printf("\nYou are second division\n");

}
else if(per>29 && per<45)
{
  printf("\nyou are third division\n");

}
else
{
  printf("\nSorry, Try Again.");
}
    if(math<30||phy<30||che<30||eng<30||hindi<30)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n Pass");
    }
    
    
}