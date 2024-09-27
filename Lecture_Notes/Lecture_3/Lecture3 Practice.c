#include <stdio.h>

int main(int argc, char**argv)
{
    char name_one[20];
    char name_two[20];
    int s1,s2;

    printf("Enter first person's name: ");
    scanf("%s",name_one);
    printf("Enter second person's name: ");
    scanf("%s",name_two);
    printf("How many stars did %s see?\n", name_one);
    scanf("%d",&s1);
    printf("How many stars did %s see?\n", name_two);
    scanf("%d",&s2);
    printf("Together, %s and %s saw %d star(s)! ", name_one, name_two, (s1+s2));
}
