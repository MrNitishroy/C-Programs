#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if(number<100)
    printf("Number is less than 100\n");
    else if(number==100)
    printf("Number is 100\n");
    else
    printf("Number is grater than 100\n");
    
}