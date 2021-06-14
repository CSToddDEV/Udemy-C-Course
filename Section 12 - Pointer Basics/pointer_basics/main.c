/*
Author: Calvin Todd
Assignment: Some basic pointer functions!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize the variables
    int num = 69;
    int *pnum = NULL;

    //Point NULL pointer pnum to num
    pnum = &num;

    //Print pointer information
    printf("\nThis is the pointer's location: %p\n", &pnum);
    printf("This is the location the pointer is pointing to: %p\n", pnum);
    printf("This is the VALUE that the pointer is at the location the pointer is pointing too: %d", *pnum);

    return 0;
}
