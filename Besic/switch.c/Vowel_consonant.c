#include<stdio.h>
int main()
{
char ch;
printf("Enter a Character: \n");
scanf("%c",&ch);
switch (ch)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
    printf("'%c' Is Vowel.",ch);
    break;

default:
printf("'%c' Is Consonant.",ch);
    break;
}
}