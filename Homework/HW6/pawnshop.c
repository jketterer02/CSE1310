#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_available_items(char *fileName, char *searchType)
{
    int count=0;
    char word[10];
    char search2[10];
    char type[255];
    char str[255];
    FILE *fp = fopen(fileName, "r+");
    if(strcmp(searchType,"stone")&&strcmp(searchType,"type")&&strcmp(searchType,"authentic"))
    {
        printf("Unknown parameter to check...");
        return -1;
    }
    printf("I see that -%s- is important in this shipment. Any specific %s to count: ", searchType, searchType);
    scanf("%s", search2);
    printf("Ok, I will keep count of the number of the following that I find: %s\n", search2);
    if(searchType=="stone")
        {
            while(!feof(fp))
            {
                fscanf(fp, "%s", word);
                if(!strcmp(word,"diamond")||!strcmp(word,"ruby")||!strcmp(word,"sapphire"))
                {
                    if(!strcmp(word,search2))
                    {
                        count++;
                    }
                    printf("--%s\n",word);
                }
                else
                {
                    continue;
                }
            }
        }
    if(searchType=="type")
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s", word);
            if(!strcmp(word,"ring")||!strcmp(word,"necklace")||!strcmp(word,"bracelet"))
            {
                if(!strcmp(word,search2))
                {
                    count++;
                }
                    printf("--%s\n",word);
            }
            else
            {
                continue;
            }
        }
    }
    if(searchType=="authentic")
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s", word);
            if(!strcmp(word,"real")||!strcmp(word,"fake"))
            {
                if(!strcmp(word,search2))
                {
                    count++;
                }
                printf("--%s\n",word);
            }
            else
            {
                continue;
            }
        }
    }
    return(count);
    fclose(fp);
}
int main(int argc, char **argv)
{
    //printf("%d\n",get_available_items("jewelry1.txt","stone"));
    //printf("%d\n",get_available_items("jewelry1.txt","type"));
    //printf("%d\n",get_available_items("jewelry1.txt","authentic"));
    printf("%d\n",get_available_items("jewelry1.txt","cookie"));
}
