/*
Author: Calvin Todd
Assignment: Count the characters in a string using pointers
*/

#include <stdio.h>
#include <stdlib.h>

//Function Declarations
int stringCounter(char *const p1);

int main()
{
    //Initialize variables
    char string[] = "This is the string to count!";
    char * const p1 = string;
    int size = 0;

    //Call function to get size of string
    size = stringCounter(p1);

    //Print results
    printf("Size of the string is: %d", size);

    return 0;
}

int stringCounter(char *const p1)
{
    //Initialize Variables
    char *p2 = p1;

    //Look for the end of the string
    while (*p2)
    {
        p2 += 1;
    }

    //Return size
    return (p2 - p1);
}
