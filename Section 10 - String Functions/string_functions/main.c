/*
Author: Calvin Todd
Assignment: Design a reverse string and sort string function
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Declarations
void reverseString();
void arrayBubbleSort();

int main()
{
    reverseString();
    arrayBubbleSort();

    return 0;
}

//Reverse String function
void reverseString()
{
    //Initialize local variables
    char str1[100];
    char str2[100];
    int len;
    int i = 0;

    //Get input to reverse
    printf("Please input a string to reverse: ");
    scanf(" %[^\n]*s", str1);

    //Get string length and loop creating reversed string
    len = strlen(str1);
    --len;

    while (len >= 0)
    {
        str2[i] = str1[len];
        --len;
        ++i;
    }

    //Null terminator
    str2[i] = '\0';

    //Print the strings
    printf("Your input was %s\n\nReversed it is: %s!\n\n", str1, str2);

}

//Array bubble sort
void arrayBubbleSort()
{
    //initialize Local Variables
    char name[25][50], temp[25];
    int i, n, j;

    //Get string #s and inputs
    printf("Input number of strings :");
    scanf("%d", &n);
    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    //Bubble sort
    for(i=1;i<=n;i++)
        for(j=0;j<=n-i;j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strncpy(temp,name[j], sizeof(temp) - 1);
                strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
            }

    //Print to screen
    printf("The strings appear after sorting :\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);
}
