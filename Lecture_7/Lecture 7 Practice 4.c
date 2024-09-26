#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
char answer[3];
  int total_yes=0; /*it’s important to intialize your variable here-if there is a garbage value in here, it would mess up your
calculation*/

  printf("Enter y or n for the survey:");
  scanf("%c", &answer[0]); /*notice I am using each element in the array individually, not as a string so I’m using &*/

  if(answer[0]=='y')
  {
    total_yes+=1;
  }

  printf("Enter y or n for the survey:");
  scanf(" %c", &answer[1]); /*Note the space before %c.  If I don’t do this, we will “skip” the next input...basically enter
getting pushed is getting counted as an input-that space before helps stop this*/

  if(answer[1]=='y')
  {
    total_yes+=1;
  }


  printf("Enter y or n for the survey:");
  scanf(" %c", &answer[2]);

  if(answer[2]=='y')
  {
    total_yes+=1;
  }

  if(total_yes<3-total_yes) /*calculating the number of no answers by subtracting the number of yes answers from the
total*/
  {
    printf("More no answers.\n");
  }

  else
  {
    printf("More yes answers.\n");
  }
}
