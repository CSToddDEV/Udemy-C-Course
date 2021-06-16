/*
Author: Calvin Todd
Assignment: Counts and returns the number of lines in a file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize variables
    int count = 0;
    FILE *pFile = NULL;
    char ch;

    //Open file for reading
    pFile = fopen("theEgg.txt", "rhttps://open.spotify.com/track/4hCPbuPcxlmAytPFjtoyJc?si=a8e325b66b3a4a7f");
    if (!pFile)
    {
        printf("ERROR: Null pointer returned!");
        return -1;
    }

    //Loop through file and count New lines
    while ((ch = fgetc(pFile)) != EOF)
    {
        if (ch == '\n')
        {
            ++count;
        }
    }

    //Close file
    fclose(pFile);
    pFile = NULL;

    //Display Results
    printf("\n*************************************\nThere were %d lines in the file!\n*************************************\n", count);

    return 0;
}
