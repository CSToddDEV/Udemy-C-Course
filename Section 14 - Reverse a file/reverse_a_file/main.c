/*
Author: Calvin Todd
Assignment: Open a file and display its' content backwards
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize variables
    int len, i = 0;
    FILE *pFile = NULL;
    char ch;

    //Open file in read
    pFile = fopen("theEgg.txt", "r");

    //Check that the pointer is not NULL
    if (!pFile)
    {
        printf("ERROR: NULL Pointer Returned!");
        return -1;
    }

    //Find end of file
    fseek(pFile, 0, SEEK_END);

    //Find Length of file
    len = ftell(pFile);

    //Check that len is valid
    if (len == -1)
    {
        printf("ERROR: LEN error!");
        return -1;
    }

    //Reverse through file and print the characters
    while (i <= len)
    {
        fseek(pFile, -i, SEEK_END);
        ch = fgetc(pFile);
        printf("%c", ch);
        i++;
    }

    fclose(pFile);
    pFile = NULL;

    return 0;
}
