/*
Author: Calvin Todd
Assignment:  Assign memory dynamically based on user input
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Initialize variables
    int string_len;
    char *pString = NULL;

    //Prompt use for the size of input string
    printf("Hello!  Please enter the number of characters for your string: ");
    scanf("%d", &string_len);

    //Allocate Dynamic memory
    pString = (char*)calloc(string_len, sizeof(char));

    //Check for NULL pointer;
    if (!pString)
    {
        printf("Your dereferenced a Null pointer bro!");
        return 1;
    }

    //Get user generated string
    printf("\n\nPlease input your string so I can put it in an array for you:\n");
    gets(pString); //Consume newline from scanf
    gets(pString);

    //Print String from the array
    printf("\n\nWell lets see here, the string you inputted was:\n%s", pString);

    //Clean up memory
    free(pString);

    return 0;

}
