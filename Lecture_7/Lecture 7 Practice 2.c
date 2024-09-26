#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
// arrays have garbage values in them unless you declare each part of the array
// you can zero out all the values by doing
//int arr[25]={0}; or
//int arr[25]={0,0,0....};
//strings are actually char arrays
//Something specific in C in regard to strings is the fact that strings end in ‘\0’
//o We can call this a null-terminated string
// ‘\0’ can be treated as a char and it is the first item in the ASCII table
//o In the example, below, I am printing out the decimal value of \0-notice it is 0
//§ I went ahead and also included \n so you can see that it is also to be treated as a
//character on the ASCII table
//   char c='\0';
//char c1='0';
//char c2='\n';
//printf("%d  %d  %d\n",c, c1,c2);
//int main(int argc, char**argv)
{
char word[10];
  fgets(word,10,stdin);
   if(word[3]=='\n') /*executes (‘s’, ‘u’, ‘n’, ‘\n’).  Remember that \n gets added by fgets*/
  {
    printf("check 1.\n");
  }
  if(word[4]=='\0') /*executes (‘s’, ‘u’, ‘n’, ‘\n’,’\0’).  Strings terminate in \0.*/
  {
    printf("check 2.\n");
  }
  char word1[]="sun";
   if(word1[3]=='\0')  /*executes (‘s’, ‘u’, ‘n’, \0’).  Strings terminate in \0-notice there is no \n like we saw in fgets*/
  {
    printf("check 3.\n");
  }
  printf("*************\n");
}

