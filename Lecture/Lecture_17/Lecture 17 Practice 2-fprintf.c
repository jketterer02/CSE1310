#include <stdio.h>
#include <string.h>
int main (int argc, char **argv)
{
    char line[50];
    printf("Enter file name:\n");
    scanf("%s", line); /*entering the file name (program below takes it from the command line)*/
    FILE* fp=fopen(line, "r");
    //fopen goes (filename,mode)
    //mode-
    // "r" opens file for reading
    // "w" creates an empty file for writing, if file in first argument has content, content is erased
    // "a" appends a file, adds data to end of file, file is created if does not exist
    // "r+" opens a file to update both reading a writing, file must exist
    // "w+" creates an empty file for both reading a writing
    // "a+" opens a file for reading and appending
    if(!fp)
    {
        printf("No file found.\n");
    }
    else
    {
        while(fscanf(fp, "%s", line)!=EOF)//EOF signifies the end of the file
        {
            printf("%s ", line);
        }
        fclose(fp); /*close the connection to the file*/
    }
}
