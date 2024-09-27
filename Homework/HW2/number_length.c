#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Jacob Ketterer
//100793039
int main(int argc, char**argv)
{
    int num;
    int num2;
    char word[20];
    char word2[20];
    printf("Please enter a number between 4-6 (Including 4 & 6): ");
    scanf("%d", &num);
    if(num>6||num<4)
    {
        printf("Number out of range!");
    }
    else
    {
        printf("Enter a word with at least %d letters and at most 10 letters: ", num);
        scanf("%s", word);
        int length=strlen(word);
        if(length>10)
        {
            printf("Too many letters!");
        }
        else
        {
            if(length<num)
            {
                printf("Too few letters!");
            }
        }
        printf("Please enter another number between 1-3: ");
        scanf("%d", &num2)
        //learned a new function for this problem
        strncpy(word2, word, (num2));
        printf("%s",word2);

    }

}
