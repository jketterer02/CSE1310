#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (int argc, char **argv)
{
    char name1[20];
    char name2[20];
    char winner[20];
    int answer;
    int win1=0;
    int win2=0;
    int i=0;

    printf("Enter first player name:\n");
    scanf("%s",name1);
    printf("Enter second player name:\n");
    scanf("%s",name2);
    while(1>0)
    {
        for(int i=0;i<1000000;i++)
        {
            printf("***\n1- enter a new round winner\n2- check who has the most wins\n");
            scanf("%d", &answer);
            if(answer==1)
            {
                printf("Who won this round?\n");
                scanf("%s", winner);
                if(strcmp(winner,name1))
                {
                    win1++;
                }
                else
                {
                    win2++;
                }
            }
            else if(answer==2)
            {
                if(win1==win2)
                {
                    printf("%s and %s both have the same number of wins so far",name1,name2);
                }
                if(win1<win2)
                {
                    printf("%s has the most wins",name1,name2);
                }
                if(win1>win2)
                {
                    printf("%s has the most wins",name2);
                }

            }
            if(answer!=2&&answer!=1)
            {
                return 0;
            }
        }
    }
}
