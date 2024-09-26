#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
    //third look type is the do while
    //"Upside down loops"
    //body of the loop executes first, so we get one execute at least
    char answer[20];
    int i=3;
    do{
      printf("%d",i);
      i++;
      }while(i<2);
}
