#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    char dog_favorite[3][20]; /*list of all 3 dog favorites*/
    strcpy(dog_favorite[0],argv[1]);
    strcpy(dog_favorite[1],argv[2]);
    strcpy(dog_favorite[2],argv[3]);
    char item_name[3][20]; /*hold chosen item name*/
    int item_price[3]; /*hold chosen item price*/
    int n=get_toys(argv[5], item_name, item_price, 10); /*reads the file info-gets three items from list that are in
    budget and returns total number of items selected-should be 3, if not see below. Also, 10 here is your budget*/
    if(n==3)
    {
        show_all(item_name, item_price, 3, argv[4]); /*Show all items with prices-see sample run*/
        toy_receipt("dogtoysreceipt.txt", item_name, dog_favorite);
    }
    else
    {
        printf("Sorry...%d is not enough toys for %s to choose from! :(\n", n,argv[4]);
    }
}
