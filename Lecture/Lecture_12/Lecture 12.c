#include <stdio.h>
#include <math.h>

/*This function takes an int, adds 2 and returns the input+2*/
int add_two(int x)
{
int num=x+2; /*num does NOT exist outside of this function-I can’t use num in main for example*/
printf("New value (printed in the function) : %d\n",num);
return num; /*I’m returning the VALUE of num, NOT the actual variable itself*/
}
int main(int argc, char **argv)
{
int number=3;
int new_value=add_two(number); /*the add_two function is passing the VALUE of number (3 in this case) NOT the
actual variable number. Inside the add_two function, we can’t access the number variable here (but I could make a new
variable called num in the function if I wanted*/
printf("New value: %d\n", new_value); /*I could also do: printf(“New value: %d\n”, add_two(number)); to use the
return value once*/
}
