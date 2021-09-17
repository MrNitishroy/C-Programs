#include<stdio.h>
#define decode(s,t,u,m,p,e,d)  m##s##u##t
#define  root decode(a,n,i,m,a,t,e)
int root()
{
    char ch;
    printf("Enter a Character=\n");
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
    {
        printf("It is a number\n");

    }
    else if(ch>=65&&ch<=90)
    {
        printf(" It is Upper Case");
    
    }
    else if(ch>=97&&ch<=122)
    {
        printf("It is Lower Case");
    }
    else
    {
        printf("It is Special Character");
    }
}