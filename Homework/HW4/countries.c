#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char countries[4][20];
    char capitals[4][20];
    char answer[20];
    int i=0;
    int j=0;
    do
    {
        printf("--Enter a country: ");
        scanf("%s",countries[i]);
        for(j = 0; j < 20; j++)
        {
            countries[i] = tolower(countries[i]);
        }
    }
    while(i<5);
}
