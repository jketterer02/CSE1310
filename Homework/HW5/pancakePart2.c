//Jacob Ketterer 1001793039
#include<stdio.h>
#include<string.h>
#include<math.h>
char info[][20];
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
    if(wrong>4)
    {
        printf("You entered flavors that didn't taste good too many times! We're going to charge double. Sorry.\n");
        float total=((choco_blue*5)+(v*3)+(o*1));
        printf("Original: $%d.00   ",((choco_blue*5)+(v*3)+(o*1)));
        printf("Total: $");
        return (((choco_blue*5)+(v*3)+(o*1))*2);
    }
    else
    {
       return (choco_blue*5)+(v*3)+(o*1);
    }
}
int main()
{
    printf("Total: $%.2f", calculate_price (info,4));
}
