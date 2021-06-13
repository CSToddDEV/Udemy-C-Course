/*
Author: Calvin Todd
Assignment: Write a few char array functions by hand.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Function declarations
void length_of_string(void);
void concatenate_strings(void);
void are_strings_equal(void);

//Main function to run test other functions
int main()
{
    length_of_string();
    concatenate_strings();
    are_strings_equal();

    return 0;
}

//Function to count an array
void length_of_string(void)
{
    //Initialize local variables
    int size_of_array = 0;
    char input[100];
    int i = 0;

    //Get input
    printf("Please input a string to get the length of: \n");
    scanf("%[^\n]*s", input);

    //Count chars
    while (input[i] != '\0')
    {
        size_of_array += 1;
        i += 1;
    }

    printf("Your input \"%s\" \n is %d characters long!", input, size_of_array);

}

//Function to concatenate two strings
void concatenate_strings(void)
{
    //Initialize local variables
    char str1[100];
    char str2[100];
    char concatenated_string[200];
    int i = 0;
    int j = 0;

    //Get strings
    printf("\n\nPlease input the first string to concatenate: \n");
    scanf(" %[^\n]*s", str1);

    printf("Please input the second string to concatenate: \n");
    scanf(" %[^\n]*s", str2);

    //Concatenate strings
    for (i = 0; str1[i] != '\0'; ++i)
    {
        concatenated_string[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++i, ++j)
    {
        concatenated_string[i] = str2[j];
    }

    concatenated_string[i] = '\0';

    printf("\n\nYour concatenated string is %s", concatenated_string);

}

//Function to determine if two strings are equal
void are_strings_equal(void)
{
    //Initialize local variables
    char str1[100];
    char str2[100];
    bool equal = true;
    int i = 0;

    //Get strings to test equality
    //Get strings
    printf("\n\nPlease input the first string to check equlaity: \n");
    scanf(" %[^\n]*s", str1);

    printf("Please input the second string to check equality: \n");
    scanf(" %[^\n]*s", str2);

    //Check string
    while (str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            equal = false;
            printf("FALSE: The strings are equal up to %d characters", i);
            break;
        }
        ++i;
    }

    //Check Null terminator
    if (str1[i] != str2[i] && equal)
        {
            equal = false;
            printf("FALSE: The strings are equal up to %d characters", i);
        }
    else if (equal)
    {
        printf("TRUE: Strings are %d characters long and equal!", i);
    }
}
