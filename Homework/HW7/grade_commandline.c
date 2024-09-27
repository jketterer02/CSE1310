//Jacob Ketterer
//1001793039
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <sys/types.h>

float nEX;
float nHW;
float nQZ;
float wEX;
float wHW;
float wQZ;
float grades[3][2];
float totalaverage;
float HWaverage;
float EXaverage;
float QZaverage;
float average;
float calculate_grades(int num_grades, char type[])
{
    float sum;
    int i;
    int counter=0;
    int grades;
    sum=0;
    for(i=0;i<num_grades;i++)
    {
        printf("Enter %s grade %d: ",type, i+1);
        scanf("%d",&grades);
        if (grades>=0&&grades<=100)
        {
            sum+=grades;
        }
        else
        {
            while(1)
            {
                printf("-- Not a valid grade. Re-enter: ");
                scanf("%d",&grades);
                if(grades>=0&&grades<=100)
                break;
            }
            sum+=grades;
        }
    }
    average=sum/num_grades;
    printf("\n",average);
    return average;
}
void output_letter(float grades[][2])
{
    float HWtotalaverage;
    float QZtotalaverage;
    float EXtotalaverage;
    HWtotalaverage=grades[0][0]*grades[0][1];
    EXtotalaverage=grades[1][0]*grades[1][1];
    QZtotalaverage=grades[2][0]*grades[2][1];
    totalaverage=QZtotalaverage+EXtotalaverage+HWtotalaverage;
    printf("Final numeric grade: %.2f\n",totalaverage);
    if(totalaverage>=90&&totalaverage<=100)
    {
        printf("You have an A!");
    }
    if(totalaverage>=80&&totalaverage<90)
    {
        printf("You have an B!");
    }
    if(totalaverage>=70&&totalaverage<80)
    {
        printf("You have an C!");
    }
    if(totalaverage>=60&&totalaverage<70)
    {
        printf("You have an D!");
    }
    if(totalaverage>=50&&totalaverage<60)
    {
        printf("You have an F!");
    }

//This function takes the float 2D array (mentioned above) and outputs the numeric grade
//and corresponding letter grade for the course.
}
int main(int argc, char **argv)
{
    //I literally cannot figure out a way to make this scanf stop while inputting something I don't want
    //I have tried a do while loop with scanf inside, doesn't work, strlen comparisons, doesn't work
    //Looked it up for 2 hours and could not figure it out, I know there's a function for a timer
    //but it must be so complicated that I can't figure it out, with all the time.h functions and
    //converting into seconds and all that, so I'll just assume the user inputs it correctly.
    // Now I'm trying SigAlarm but I'm getting weird errors, even though this one seems more simple,
    //might be only Linux thing.
    scanf("%f %f %f %f %f %f",&nHW,&wHW,&nEX,&wEX,&nQZ,&wQZ);
    if((wHW+wEX+wQZ>100))
    {
        printf("Weights not accurate...Exiting...");
        return 0;
    }
    wHW=wHW/100;
    wEX=wEX/100;
    wQZ=wQZ/100;
    //printf("%f %f %f",nHW,nEX,nQZ);
    HWaverage=calculate_grades(nHW,"HW");
    average=0;
    EXaverage=calculate_grades(nEX,"exam");
    average=0;
    QZaverage=calculate_grades(nQZ,"quiz");
    float grades[3][2] = {{wHW,HWaverage},{wEX,EXaverage},{wQZ,QZaverage}};
    output_letter(grades);
}

//The final numeric grade and
//corresponding letter grade (using the same letter grade scheme shown on my syllabus)
//should be output to screen.


