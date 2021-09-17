#include<stdio.h>
int main()
{
  
char ch;
printf("Entre  a character");
scanf("%c",&ch);
switch(ch)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("%c is Vowel",ch);
break;
default:
printf("%c is consonant",ch);
break;




}

}