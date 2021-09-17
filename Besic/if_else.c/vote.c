#include<stdio.h>
int main()
{
    int vote;
    //it is use for vote 
    
    printf("Enter your age\n");
    scanf("%d",&vote);
    if(vote>=18)
    {
        printf("Yes! you are Eligible to Vote\n");

    }
    else
    {
        printf("Sorry You are not Eligible to vote\n");

    }

}