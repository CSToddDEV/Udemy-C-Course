/*
Author: Calvin Todd
Assignment: Open a file and write all characters to a temporary file in uppercase.  Then rename the file, delete the old one
and display the new one to the console.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //Initialize variables
    FILE *pFile, *pNewFile;
    int ret;
    char ch;

    //Open files
    pFile = fopen("theEgg.txt", "r");
    pNewFile = fopen("newEgg.txt", "w+");

    //Check pointers
    if (!pFile || !pNewFile)
    {
        printf("ERROR: Your pointers be off");
        return -1;
    }

    //Loop through files copying uppercase characters
    while ((ch = fgetc(pFile)) != EOF)
    {
        ret = isupper(ch);
        if (ret == 0 && (ch > 96) && (ch < 123))
        {
            ch -= 32;
        }
        fputc(ch, pNewFile);
    }

    //Close files and remove pointers
    fclose(pFile);
    fclose(pNewFile);
    pFile = NULL;
    pNewFile = NULL;

    //Delete Old file
    ret = remove("theEgg.txt");
    if (ret != 0)
    {
        printf("\nERROR: File not deleted");
        return -1;
    }

    //Rename new file
    ret = rename("newEgg.txt", "theEgg.txt");
    if (ret != 0)
    {
        printf("ERROR: File note renamed!");
        return -1;
    }

    //Open file again now that it is all uppercase
    pFile = fopen("theEgg.txt", "r");

    //Print file
    while ((ch = fgetc(pFile)) != EOF)
    {
        printf("%c", ch);
    }

    return 0;
}
