#include <stdio.h>

int main(int argc, char**argv)
{
    char name[20],item_one[20],item_two[20];
    float price_one, price_two,total_price,charity;
    printf("Please enter your name:");
    scanf("%s", name);
    printf("\nHello %s! Enter grocery store item #1: ",name);
    scanf("%s", item_one);
    printf("\nEnter the price of %s: ",item_one);
    scanf("%f", &price_one);
    printf("\nEnter grocery store item #2: ");
    scanf("%s", item_two);
    printf("\nEnter the price of %s: ",item_two);
    scanf("%f", &price_two);
    total_price=price_one+price_two;
    charity=total_price*1.03;
    printf("\nOk %s, your total with donation to Paws 4 life charity is $%.2f. The groceries alone (before charity contribution) is :$%.2f. Thanks! ",name,charity,total_price);
}
