#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Jacob Ketterer
//100793039
int main(int argc, char**argv)
{
    int answer;
    int length;
    int height;
    int width;
    int area;
    int price=1;
    int price2=2;
    int total;
    printf("***Hello! Please pick from the following options:***\n1) Buy standard wrapping paper-press 1\n2) Buy holiday edition wrapping paper-press 2\n");
    scanf("%d",&answer);
    if(answer==1)
    {
        printf("You have selected standard wrapping paper.\nPlease enter the size of your gift (in inches):\n");
        printf("Length:");
        scanf("%d",&length);
        printf("Height:");
        scanf("%d",&height);
        printf("Width:");
        scanf("%d",&width);
        area=(2*width*length)+(2*length*height)+(2*height*width);
        total=area*price;
        printf("You will pay $%d at the counter. Thank you for shopping with us!",total);
    }
    else
    {
        printf("You have selected holiday wrapping paper.\nPlease enter the size of your gift (in inches):\n");
        printf("Length:");
        scanf("%d",&length);
        printf("Height:");
        scanf("%d",&height);
        printf("Width:");
        scanf("%d",&width);
        area=(2*width*length)+(2*length*height)+(2*height*width);
        total=area*price2;
        printf("You will pay $%d at the counter. Thank you for shopping with us!",total);
        //code could be condensed but it was easier to copy paste
    }
}
