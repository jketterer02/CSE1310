#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Jacob Ketterer
//1001793039
int main (int argc, char **argv)
{
  int sum=0;
  int amount;
  char answer[10];
  while (1>0)
    {
        printf("\n***Welcome! Are you looking to donate or do you work here?\n");
        gets(answer);
        if (strcmp(answer, "donate")==0)
        {
            if (sum>=100)
            {
                printf("We already met our target but thanks!\n");
                continue;
            }
            else
            {
                printf("Great! How much? $");
                scanf("%d", &amount);
                sum=sum+amount;
            }
        }
        else if (strcmp(answer,"work here")==0)
        {
            printf("sum donated so far: $%d\n", sum);
            continue;
        }
        else if (strcmp(answer,"exit")==0)
        {
            printf("Bye!\n");
            break;
        }
        gets(answer);
    }
}
