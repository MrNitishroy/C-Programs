#include<stdio.h>
int main()
{
    int language;
    printf("Enter a number\n");
    scanf("%d",&language);
    switch (language)

    {
    case 1:
       printf("You Enter 1\n");
        break;
    case 2:
       printf("You Enter 2\n");
        break;
        case 3:
       printf("You Enter 3\n");
        break;
        case 4:
       printf("You Enter 4\n");
        break;
        case 5:
       printf(" You Enter 5\n");
        break;
        case 6:
       printf("You Enter 6\n");
        break;
    default:
    printf("You Enter More than 6\n");
        break;
    }
}