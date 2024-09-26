#include <stdio.h>
#include <string.h>

//Data structures are just arrays of variables, like strings, ints or chars
//a string is an array of chars
//instead of
// int a=3;
// int b=4;
// int c=5;
// int d=78;
// int e=18;
// int f=18;
// int f=99;
//we can do
// int arra[]={3,4,5,78,19,99};
int main(int argc, char**argv)
{
int I;
  int num_pencils[3];

  num_pencils[0]=12; /*hardcoding*/

  printf("Enter the number of pencils: ");
  scanf("%d",&num_pencils[1]); //*user input-notice we are using the address operator & because each element of an
//array is to be treated like a single variable. This is targeting the second cell in the array

num_pencils[2]=printf("Hello!"); //storing the return value of 6, 6 letters, 6 return value

  /*seeing the values in each element of the array*/
  printf("%d\n", num_pencils[0]);
  printf("%d\n", num_pencils[1]);
  printf("%d\n", num_pencils[2]);
}
