#include<stdio.h>
#define decode(s,t,u,m,p,e,d)  m##s##u##t
#define hatt decode(a,n,i,m,a,t,e)
int hatt()
{
    int id=500;
    printf("Enter your passwod\n");
    scanf("%d",&id);
    switch (id)
    {
    case 0000:
    printf("Welcome Programer, Thanks for Vigiter Here\n");

        break;
    
    default:
    printf("Incroct Passwod,Try Again");
        break;
    }
}