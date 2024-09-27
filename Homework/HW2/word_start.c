#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Jacob Ketterer
//100793039
int main(int argc, char**argv)
{
    char word[20];
    printf("Enter a word: ");
    scanf("%s",word);
    if(word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U'||word[0]=='Y')
    {
        printf("%s starts with a vowel.", word);
    }
    else
    {
         if(word[0]=='b'||word[0]=='c'||word[0]=='d'||word[0]=='f'||word[0]=='g'||word[0]=='h'||word[0]=='j'||word[0]=='k'||word[0]=='l'||word[0]=='m'||word[0]=='n'||word[0]=='p'||word[0]=='q'||word[0]=='r'||word[0]=='s'||word[0]=='t'||word[0]=='v'||word[0]=='w'||word[0]=='x'||word[0]=='z')
         {
             printf("%s starts with a consonant.", word);
         }
         else
         {
              printf("%s starts with neither a vowel nor a consonant.", word);
         }
    }
}
