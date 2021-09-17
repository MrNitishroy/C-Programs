#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet =\n");
     scanf("%c",&ch);
    switch (ch)
    {
    case 'A'... 'Z':
     printf("%c is a upercase",ch);
        break;
     case 'a'... 'z':
     printf("%c is a lowercase",ch);
        break;
    default:
    printf("plz enter an alphabet");
        break;
    }
    




}  

