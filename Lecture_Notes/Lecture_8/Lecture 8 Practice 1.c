#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
    //we want to print out all integers in an array
   int arr1[]={2, 4, 6, 8, 10};
    //instead of
    //printf(“%d”, arr[0]); /*prints out number 2*/ 5 times we do
  //  for(i=0;i<5;i++)
        //i=0 variable i is assigned value 0, corresponds to index 0
        //i<5 the stopping condition, will stop when condition is false
        //i++ (increment operator), the array will increment by 1 each turn
        //arr1[i] current value of i is the index used to print the current element array
       // {
        //    printf("%d",arr1[i]);
       // }

    //we can also use a while loop to do the same thing
    int i=5;
    i=0;
    while(i<5)
    {
        printf("%d\n",arr1[i]);
        i++;
    }
}
