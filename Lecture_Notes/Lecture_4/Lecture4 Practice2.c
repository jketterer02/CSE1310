#include <stdio.h>
//studio.h is a c standard library
//the functions are not in the library's .h file, they just give us access to it
//#include is a preprocessor directive, helps computer access library
//#Define is also a preprocessor directive

//main is a function the computer looks for to execute step by step
int main(int argc, char**argv)
{
    //this lowercase f actually responds to the ASCII table value for 102
    char letter='f';

    //this 70 number actually corresponds to the ASCII table, 70 is capital F
    char letter_one=70;

    //the difference between an uppercase letter and lowercase on the ASCII
    //table is exactly 32

    //unsigned variable has no negatives involved

    printf("Letters: %c, %d\n\n",letter, letter);
    printf("Letters: %c, %d\n", letter_one, letter_one);
}
