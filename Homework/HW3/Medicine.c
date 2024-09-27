#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (int argc, char **argv)
{
    char name[10][30];
    char patient[20];
    int pills[3]={0,0,0};
    int pill;
    int found=0;
    char cnf[5];

    for(int i=0;i<3;i++)
    {
        printf("Enter patient %d name: ", i+1);
        gets(name[i]);
    }
    while(strcmp(patient,"exit")!=0)
    {
        printf("Enter patient name taking pills: ");
        scanf("%s",patient);
        for(int i=0;i<3;i++)
        {
            if(strcmp(name[i],patient)==0)
            {
                found=1;
                printf("Paient found: Patient %d! How many pills: ", i+1);
                scanf("%d", &pill);
                pills[i]+=pill;
                printf("Total pills so far for %s: %d\n", patient, pills[i]);
                break;

            }
        }
    }
    printf("Would you like to see the total pills amount of each patient? ");
    scanf("%s", cnf);
    if(strcmp(cnf,"yes")==0)
    {
        for(int i=0;i<3;i++)
        {
            printf("%s: %d\n", name[i], pills[i]);
        }
    }
}
