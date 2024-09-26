#include <stdio.h>

int main(int argc, char**argv)
{
    char word_one[15];
    char word_two[15];
    printf("Enter a word: ");
    scanf("%s", word_one);
    printf("Enter another word: ");
    scanf("%s", word_two);
    printf("Compound word is: %s%s",word_one, word_two);
}
