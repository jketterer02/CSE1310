#include <stdio.h>

int main(int argc, char**argv)
{
    int n1,n2;
    //sets aside 2 integers, n1 and n2
    char word_one[20];
    //sets aside 20 spots for characters/a string
    char word_two[10];
    char word_three[10];
    float float_num=3.6;
    //declares a float and initializes a value

    printf("Enter a float number: ");
    //Prints this string on the screen
    //double quotes is a string, single quotes is a char

    scanf("%f", &float_num);
    //erases your previous float_num value with the user input value
    //%f is a format specifier, %f is float, %d is integer,char is %c
    //%s is string

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    //allows the user to type two integers, to be stored in n1 and n2

    printf("Enter three words: ");
    scanf("%s %s %s", word_one, word_two, word_three);
    //do not need to prefix with an & sign, when dealing with characters

    printf("Second Word: %s -- second number: %d\n", word_two, n2);
    //when you have two format specifiers, must give those specifiers what
    //their values are. \n is a new line character

}
