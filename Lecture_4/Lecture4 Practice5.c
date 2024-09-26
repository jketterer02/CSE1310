#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
    char firstword[20];
    char fruit[20];
    printf("Enter a word: ");
    scanf("%s", &firstword);
    printf("Enter a fruit: ");
    scanf("%s", &fruit);

    if(strcmp(fruit,"apple")==0)
    //strcmp returns 0 if the two argument strings are the same
    {
       printf("I don't like apples. Exiting.\n");
    }
    else
    {
        strcat(firstword,fruit);
        //strcat concatenates the strings together, into the first argument
        printf("New string: %s",firstword);
    }
}
