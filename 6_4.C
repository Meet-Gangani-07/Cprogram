//THIS PROGRAM IS CREATED BY 22CE033_22CE048
#include<stdio.h>
int main()
{
    int stick=21,user,computer;
    while(stick>=1)
    {
        printf("\nEnter the value of stick(1 to 4) : ");
        scanf("%d",&user);
        if(user>4 ||user<1)
        continue;
        computer=5-user;
        printf("Computer picked up %d sticks!!",computer);
        stick = stick - computer-user;
        printf("\n\nRemaining sticks are = %d\n",stick);
        if(stick==1)
        {
            //printf("Number of matches left = %d",stick);
            printf("\nOops!! You lose the game..\nBetter luck next time.");
            break;
        }
    }
    printf("\nTHIS PROGRAM IS CREATED BY 22CE033_22CE048");
    return 0;
}
