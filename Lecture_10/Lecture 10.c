#include <stdio.h>
#include <math.h>

int main (int argc, char **argv)
{
    char arr[3][20]={"cat","dog","bird"};
    int i,j;

    for(i=0;i<3;i++)
    {
      printf("%s\n",arr[i]); /*each word is printed out here*/
    }
}
