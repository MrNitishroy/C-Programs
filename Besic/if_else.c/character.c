#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any character=\n");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("It is Uppercase char.");
    else if (islower(ch))
    {
        printf("It is Lowercase char.");
    }
    else if(isdigit(ch))
    {
        printf("It is Digicase char.");
    }
    else
    {
        printf("It is Special char.");
    }
    

}