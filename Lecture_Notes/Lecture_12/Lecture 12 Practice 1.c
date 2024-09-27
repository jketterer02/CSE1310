#include <stdio.h>
#include <math.h>
#include <string.h>

void enter_word(char user_input[])
{
printf("\nEnter a word at least 5 letters long: ");
scanf("%s",user_input);
while(strlen(user_input)<5)
{
printf("The word must be at least 5 letters. %s is only has %lu letter(s). Enter again: ", user_input,
strlen(user_input));
scanf("%s",user_input);
}
}
/*This function takes a string and a letter to look for and returns the number of instances that the letter occurs. For example,
if we had int n=check_letter(“cat in the hat”, ‘t’); the value of n would be 3 since 3 occurs in the given string 3 times*/
int check_letter(char str[], char letter)
{
int i, counter=0;
for(i=0;i<strlen(str);i++)
{
if(str[i]==letter)
{
counter++;
}
}
return counter; /*returns the value of counter (the number of times we found the letter)*/
}
int main(int argc, char **argv)
{
char answer[20];
char letter;
enter_word(answer);
printf("\nEnter a letter to check for: ");
scanf(" %c",&letter);
int total_letters=check_letter(answer, letter);
printf("Total letters: %d\n",total_letters);
if(total_letters<5)
{
printf("Candy!\n");
}
else
{
printf("Potato!\n");
}
}
