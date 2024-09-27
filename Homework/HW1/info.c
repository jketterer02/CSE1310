#include <stdio.h>
//Jacob Ketterer
//ID Number: 1001793039
int main(int argc, char**argv)
{
    int age;
    char name[25];
    char food[25];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Enter your age:\n");
    scanf("%d", &age);
    int years=(age+2);
    printf("Enter your favorite food:\n");
    scanf("%s", &food);
    printf("\nMy name is: %s and my favorite food is %s!\n***\n", name, food);
    printf("I am %d years old and in 2 years I will be %d!\n", age, years);
}
