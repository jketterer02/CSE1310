#include <stdio.h>

int main(int argc, char**argv)
{
  int divisor,dividend,quotient,remain;
  printf("Enter a dividend: ");
  scanf("%d",&dividend);
  printf("Enter a divisor: ");
  scanf("%d",&divisor);
  quotient=(dividend/divisor);
  remain=(dividend%divisor);
  printf("Quotient:%d\n",quotient);
  printf("Remainder:%d\n",remain);
  quotient-=3;
  remain+=2;
  printf("Changed Quotient:%d\n",quotient);
  printf("Changed Remainder:%d\n",remain);
}
