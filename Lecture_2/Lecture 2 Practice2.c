#include <stdio.h>

int main(int argc, char**argv)
{
    int n1,n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    int sum=n1+n2;

    printf("You entered %d and %d. The Sum = %d\n ",n1,n2,sum);
    printf("Sum again!: %d",(sum*2));
}
