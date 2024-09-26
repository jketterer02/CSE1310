#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);

    //return type of the function is called size_t, which is an unsigned int
    //this gets converted to an int behind the scenes to help
    int length= strlen(word);

    if(length<5)
    {
        printf("Sorry, this word isn't long enough.  Exiting...\n");
    }
    else
    {
        char third_letter=word[2];
        //index for a letter starts at 0, not 1
        printf("First letter: %c\nThird letter: %c\n", word[0], third_letter);
            if(third_letter<96)
            //remember that in the ASCII table the upper case letters are
            //below 96, so if the third letter is below 96, it must be uppercase
            {
                printf("Lower case! %c\n",(third_letter+32));
                //upper and lowercase are off by 32 always
            }
            else
            {
                printf("Capitalizing! %c\n",(third_letter-32));
            }
    }
}
