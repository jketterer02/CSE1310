//Jacob Ketterer 1001793039
#include<stdio.h>
#include<string.h>
#include<math.h>
char info[][20];
int enter_favorites(char fav_pancakes[][20],int size)
{
    int wrong=0;
    for (int i=0;i<size;i++)
    {
        printf("Enter favorite pancake %d: ",i+1);
        gets(fav_pancakes[i]);
        while(strcmp(fav_pancakes[i],"pumpkin")==0||strcmp(fav_pancakes[i],"strawberry")==0)
        {
            printf("--Yuck! Pick something else: ");
            gets(fav_pancakes[i]);
            wrong++;
        }
    }
    return wrong;
}
float calculate_price(char fav_pancakes[][20], int size)
{
    int wrong=0;
    int choco_blue=0;
    int v=0;
    int o=0;
    for (int i=0;i<size;i++)
    {
        printf("Enter favorite pancake %d: ",i+1);
        gets(fav_pancakes[i]);
        while(strcmp(fav_pancakes[i],"pumpkin")==0||strcmp(fav_pancakes[i],"strawberry")==0)
        {
            printf("--Yuck! Pick something else: ");
            gets(fav_pancakes[i]);
            wrong++;
        }
        if(strcmp(fav_pancakes[i],"chocolate chip")==0||strcmp(fav_pancakes[i],"blueberry")==0)
        {
            choco_blue++;
        }
        else if(strcmp(fav_pancakes[i],"vanilla")==0)
        {
            v++;
        }
        else
        {
            o++;
        }
    }
    return ((choco_blue*5)+(v*3)+(o*1));
}
int main()
{
    printf("%d", enter_favorites(info,4));
    printf("%.2f", calculate_price (info,4));
}
