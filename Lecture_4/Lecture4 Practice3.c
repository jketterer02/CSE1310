#include <stdio.h>

int main(int argc, char**argv)

{
    //unsigned longs only hold positive values
    unsigned long length, width, area;
    unsigned long price=3;

    printf("Hello!  Please enter the length of your yard:\n");
    scanf("%lu", &length);
    printf("Please enter the width:\n");
    scanf("%lu", &width);
    area=length*width;

    if(area<50)
    {
        printf("Sorry, can't do your yard! Try someone else!\n");
    }
    else
    {
        //lu is the format specifier for unsigned longs
        printf("Price to do your yard: $%lu\n",(area*price));
    }
}
