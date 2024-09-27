#include <stdio.h>

int main(int argc, char**argv)
{
    //printf and scanf is a process already made for us
    //the premade functions are accessed by adding the premade headers
    //studio.h, we can make our own functions
    //main is actually a function

    //saves the return value of the printf function into the variable
    //number of integers printed out to the screen, in this case 6
    int n=printf("Hello!");

    //prints that variable
    printf("\nNumber of letters: %d\n",n);
}
