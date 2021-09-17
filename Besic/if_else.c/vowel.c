#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character=\n");
    scanf("%c",&ch);
    if((ch=='a') || (ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')
    ||(ch=='O')||(ch=='u')||(ch=='U'))
    {
        printf("\n Character is a Vowel. ");
    }
    else
    {
        printf("\n Character is not a Vowel.");
    }
}