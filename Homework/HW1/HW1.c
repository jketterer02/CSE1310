#include <stdio.h>
#include <math.h>

int main (int argc, char **argv)
{
int i=0;
int scores[]={0,0,0};
while(i<3)
{
printf("Scores: ");
scanf("%d", &scores[i]);
i++;
}
if((scores[0]<=scores[1])&&(scores[1]!=scores[2]))
{
scores[0]+=3;
printf("score 1: %d\n",scores[0]);
}
else if(!(scores[0]==20))
{
scores[1]-=2;
scores[i-2]=100;
for(i=0;i<30;i++)
{
printf("%d %d\n",scores[0], scores[1]);
}
}
else
{
printf("CTG currently doing DOTD on The Breakfast Club....\n");
}
}
