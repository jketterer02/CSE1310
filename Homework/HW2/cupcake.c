#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Jacob Ketterer
//100793039
int main(int argc, char**argv)
{
    int budget;
    int price;
    int price2;
    char flavor[20];
    char flavor2[20];
    char answer[20];
    printf("Please enter starting budget: ");
    scanf("%d", &budget);
    printf("Enter the flavor of cupcake 1: ");
    scanf("%s", flavor);
    printf("Enter the price of this %s cupcake: $", flavor);
    scanf("%d", &price);
    int overpay=(price-budget);
    int leftover=(budget-price);
    if(price==budget)
    {
        printf("Oops! No more money left to spend on anymore cupcakes...enjoy the %s one! Bye!", flavor);
    }
    else
    {
        if(price>budget)
        {
            printf("Wow, you overspent on that first cupcake...you owe: $%d. Bye!", overpay);
        }
        else
        {
            printf("Ok, looks like you have $%d left to spend on cupcakes...Would you like to get another one? ", leftover);
            scanf("%s", answer);
            if(!strcmp(answer,"no"))
            {
                printf("Ok then...Enjoy that one chocolate cupcake! Bye!");
            }
            else
            {
                printf("Enter the flavor of cupcake 2: ");
                scanf("%s", flavor2);
                printf("Enter the price of this %s cupcake: $", flavor2);
                scanf("%d", &price2);
                printf("Done! Enjoy your %s and %s cupcakes! Bye! ",flavor,flavor2);
            }
        }
    }
}
