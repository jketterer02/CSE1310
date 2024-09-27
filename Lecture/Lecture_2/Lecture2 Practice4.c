#include <stdio.h>

int main(int argc, char**argv)
{
    char first_name[25];
    char last_name[25];
    printf("Enter your First Name: ");
    scanf("%s", first_name);
    printf("Enter your Last Name: ");
    scanf("%s", last_name);
    printf("Name is: %s, %s",last_name, first_name);
}
