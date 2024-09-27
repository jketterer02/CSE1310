//Jacob Ketterer 1001793039
#include<stdio.h>
#include<string.h>
#include<math.h>
int x;
int leapYear(int x)
{
    if(x%400==0)
    {
        return 1;
    }
    else if(x%100==0)
    {
        return 0;
    }
    else if(x%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int three_ints[3]={4,10,12};
int three_nums(int arr[])
{
    if(arr[0]<arr[1]&&arr[0]<arr[2]&&arr[1]<arr[2])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void print_out(int h_size, char character, char* word)
{
    if((strlen(word)>h_size)||(h_size%2==1))
    {
        printf("Can't print this :(" );
    }
    else
    {
        int v_size=h_size/2;
        int h_counter;
        int v_counter;
        int s_counter;
        for(h_counter=0;h_counter<=h_size;h_counter++)
        {
            printf("%c",character);
        }
        printf("\n");
        for(v_counter=0;v_counter<=(v_size/2);v_counter++)
        {
            printf("%c",character);
            for(s_counter=0;s_counter<=(h_size-2);s_counter++)
            {
                printf("%c",' ',(v_size));
            }
            printf("%c",character);
            printf("\n");
        }
        printf("%c",character);
        for(s_counter=0;s_counter<=v_size-strlen(word)/2-2;s_counter++)
        {
            printf("%c",' ');
        }
            printf("%s",word);
                        for(s_counter=0;s_counter<=v_size-strlen(word)/2-2;s_counter++)
            {
                printf("%c",' ');
            }
            printf("%c",character);
        printf("\n");
        //spacing to remember what I'm working on
        for(v_counter=0;v_counter<=(v_size/2);v_counter++)
        {
            printf("%c",character);
            for(s_counter=0;s_counter<=(h_size-2);s_counter++)
            {
                printf("%c",' ',(v_size));
            }
            printf("%c",character);
            printf("\n");
        }
        for(h_counter=0;h_counter<=h_size;h_counter++)
        {

            printf("%c",character);
        }
    }

}
int main(int argc,char**argv)
{
    printf("%d\n", leapYear(2020));
    printf("%d\n", three_nums(three_ints));
    print_out(10, '*', "Hello");
}
