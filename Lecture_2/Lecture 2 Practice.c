#include <stdio.h>

int main(int argc, char**argv)
{
    int c1,c2,total_donuts;

    printf("Enter the number of Donuts baked today: ");
    scanf("%d", &total_donuts);

    printf("Enter the number of Donuts customer 1 ordered today: ");
    scanf("%d", &c1);

    printf("Enter the number of Donuts customer 2 ordered today: ");
    scanf("%d", &c2);

    total_donuts=total_donuts-c1-c2;
    printf("Leftover amount of Donuts: %d%\n", total_donuts);
}
