#include <stdio.h>
int main(int argc, char**argv)
{
  char name[20];
  char baked[20];
  int total_baked;
  float price;
  printf("Enter the baker's name: ");
  scanf("%s",name);
  printf("What was baked: ");
  scanf("%s",baked);
  printf("How many %s(s) did %s bake?: ", baked, name);
  scanf("%d",&total_baked);
  price=(total_baked*3)-1;
  printf("Total price: $%.2f\n",price);
}
