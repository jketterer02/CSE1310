#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
    int check(char food_name[],char a[][20],int size)
    {
        int i;
        int check=0;

        for(i=0;i<size&&!check;i++)
        {
            if(!strcmp(food_name,a[i]))
            {
                check=1;
            }
        }
        return check;
    }
}
