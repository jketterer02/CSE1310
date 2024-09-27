#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
   int cash=50;

    switch(cash){
        case 10: /*is it the case that cash==10? No, we then move to the next case...kind of like if(case==10)*/
            printf("Not bad...\n");
            break;

        case 20: /*is it the case that cash==20? No, we then move to the next case...etc...kind of like else if(case==20)*/
            printf("Better...\n");
            break; /*note that break means we picked this case and we don’t visit any other cases ...*/

        case 30:
            printf("Even better...\n");
            break;

        case 40:
            printf("Ok, now we're talking!\n");
            break;

        default:  //default means none of the other cases worked...it’s like a final else statement with a bunch of if/else-ifs/else
            printf("Wow, what a great day!!!\n");
    }
}
