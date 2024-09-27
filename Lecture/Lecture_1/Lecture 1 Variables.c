#include <stdio.h>

int main(int argc, char**argv)
{
 int n;
 //int declares an integer named n

 n=3;
 //n is equal to 3

 n=7;
 //n is now equal to 7, this overwrites the 3 because code
 //is written 1 line at a time

 int n2=10;
 //int declares an integer named n2, which is equal to 10,
 //does both declare and initializes in one line

 char c ='f';
 //declares a single character letter, name this space c,
 //and have the character 'f'

 float num=3.4;
 //declares a float, a number with a decimal, named num,
 //and has a value of 3.4

 double numl=5.6;
 //declares a double, a number with a decimal, named numl,
 //which has a value of 5.6. Double gives more space???

 char str[]="First class in C!"
 //declares a string, and gives the string itself

 char* str_two="Another way to do this."
 //declares a string, and gives the string itself

 char str_three[20];
 //declares a string, and gives the max size of the string, 20 characters
}
