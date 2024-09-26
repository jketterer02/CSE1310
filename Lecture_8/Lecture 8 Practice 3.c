#include <stdio.h>
#include <math.h>

int main (int argc, char **argv)
{
   float nums[3];
  int i;
  float value;

  for(i=0;i<3;i++)
  {
    printf("Enter a number: ");
    scanf("%f",&value);

    nums[i]=sqrt(value);

  }

  i=0;

  while(i<3)
  {
    printf("\nValue in element %d: %f",i, nums[i]);
    i++;
  }
}
