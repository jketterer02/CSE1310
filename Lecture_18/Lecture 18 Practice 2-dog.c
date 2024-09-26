#include <stdio.h>
#include <string.h>
void get_user_input(char message[], char answer[])
{
    printf("%s",message);
    scanf("%s",answer);
}
int read_info(char filename[], char dog_info[3][20])
{
    FILE* fp=fopen(filename,"r");
    if(!fp)
    {
        printf("File didn't open.\n");
        return 0;
    }
    else
    {
        fscanf(fp, "%s %s %s", dog_info[0],dog_info[1],dog_info[2]); /*using fscanf*/
        return 1;
    }
}
void create_lost_dog_poster(char dog_info[3][20])
{
    char info[40];
    char info2[40];
    strcpy(info,"find_");
    strcat(info,dog_info[0]);
    strcat(info,".txt");
    printf("Creating flyer... (%s)\n",info);
    FILE* fp=fopen(info,"w+");
    fprintf(fp,"***LOST DOG!!!***\n");
    fprintf(fp,"Name: %s\nAge: %s\nBreed: %s\n", dog_info[0],dog_info[1],dog_info[2]);
    rewind(fp);
    printf("\n--Here is your flyer:\n");
    while(fgets(info,40,fp))
    {
        printf("%s",info);
    }
    get_user_input("\n--Would you like to enter your contact info? y or n: ",info);
    if(info[0]=='y')
    {
        get_user_input("Enter your contact info:",info);
        fprintf(fp,"Contact Info: %s\n",info);
        rewind(fp);
        printf("\n--Updated flyer:\n");
        while(fgets(info,40,fp))
        {
            printf("%s",info);
        }
    }
    fclose(fp);
}
int main(int argc, char **argv)
{
    char dog[3][20];
    int value=read_info("lostdog.txt",dog);
    if(value)
    {
        create_lost_dog_poster(dog);
    }
}
