#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
    char line[50];
    printf("Enter file name:\n");
    scanf("%s", line); /*entering the file name (program below takes it from the command line)*/
   FILE* fp=fopen(line, "r");
    if(!fp)
    {
        printf("No file found.\n");
    }
    else
    {
        while(!feof(fp))//feof returns true when it is the end of file fp
        {
            fgets(line,50,fp);
            printf("%s", line);
        }
        fclose(fp); /*close the connection to the file*/
    }
}

