#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    char word[2][20];
    int num;
    float value;
    FILE* fp=fopen("info.txt","r");
    if(fp)
    {
        fscanf(fp,"%s %d %s %f",word[0],&num,word[1],&value);
        printf("Info: %s, %s, %d, %f\n",word[0],word[1],num,value);
    }
}
