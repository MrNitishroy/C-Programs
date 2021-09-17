#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,gues,total=1;
    srand(time(0));
    num=rand()%100+1;
    do{
        printf("Guess the number Between 1 to 100\n");
        scanf("%d",&gues);
        if(gues>num)
        {
            printf("lower number plz\n");
        }
        else if(gues<num)
        {
            printf("Higer Number plz\n");

        }
        else
        {
            printf("You guessed iy In %d attempts\n",total);
        }
        total++;

    }while(gues!=num);
}