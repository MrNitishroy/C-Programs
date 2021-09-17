#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Two Number\n");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    {
        printf("%d and %d is Equall ",num1,num2);
    }
    else if(num1>num2)
    {
    printf("%d IS grater than %d",num1,num2);

    }
    else if(num1<num2)
    {
        printf("%d Is less than %d",num1,num2);
    }
    else
    {
        printf("Plz Enter Any Two Number");
    }
}