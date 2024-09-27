#include <stdio.h>

int main(int argc, char**argv)
{
    char string_one[20];

    printf("Enter a phrase: ");
    //scanf("%s", string_one);
    //this will only show the first word of the phrase the user types, can use
    //fgets to solve this
    fgets(string_one,20,stdin);
    //stdin means you are taking input from the keyboard
    //fgets automatically puts a new line after execution, scanf doesn't do this
    printf("User entered: %s", string_one);

}
