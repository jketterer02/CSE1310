#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Jacob Ketterer
//100793039
int main(int argc, char**argv)
{
    char day[20];
    char food[20];
    int number;
    printf("Enter food: ");
    scanf("%s", food);
    printf("Enter day: ");
    scanf("%s", day);
    //accounted for both capitalized and uncapitalized spellings here
    if(strcmp(day,"Monday")==0||strcmp(day,"Tuesday")==0||strcmp(day,"Sunday")==0||strcmp(day,"monday")==0||strcmp(day,"tuesday")==0||strcmp(day,"sunday")==0)
    {
        if(food[0]=='m'||food[0]=='k'||food[0]=='M'||food[0]=='K')
        {
            printf("Sorry, on %s I can't eat that...",day);
        }
        else
        {
            printf("Mmmm...can't wait to eat %s today!!!",food);
            printf("\nEnter the number of %s you want to eat: ",food);
            scanf("%d", &number);
            if(number>3)
            {
              printf("Wow, that's a lot of %s!",food);
            }
        }
    }
   else
    {
        if(strcmp(day,"Wednesday")==0||strcmp(day,"Thursday")==0||strcmp(day,"Friday")==0||strcmp(day,"wednesday")==0||strcmp(day,"thursday")==0||strcmp(day,"friday")==0)
        {
            if(food[0]=='j'||food[0]=='J')
            {
               printf("Sorry, on %s I can't eat that...",day);
            }
            else
            {
               printf("Mmmm...can't wait to eat %s today!!!",food);
            }
        }
        else
        {
           if(strlen(food)<7&&(food[0]=='p'||food[0]=='P'))
           {
              printf("Mmmm...can't wait to eat %s today!!!",food);
           }
           else
           {
              printf("Sorry, on %s I can't eat that...",day);
           }
        }
    }
}
