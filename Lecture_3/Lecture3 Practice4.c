#include <stdio.h>
#define PI 3.141592
int main(int argc, char**argv)
{
  float radius;
  printf("Enter radius: ");
  scanf("%f",&radius);
  radius=(2*radius*PI);
  printf("Circumference: %f\n",radius);
  radius++;
  printf("New Circumference: %f\n",radius);
  radius--;
  printf("Original Circumference: %f",radius);
}
