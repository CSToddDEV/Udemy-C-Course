/*
Author: Calvin Todd
Assignment: Take an integer input, minutes, from the user.  Then print to the screen the amount of a day and a year these minutes represent.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize Variables
    int minutes;
    double day, year;

    //Get user input
    printf("Please input the amount of minutes you would like to convert: \n");
    scanf("%d", &minutes);

    //Calculations
    day = ((double) minutes/60)/24;
    year = day/365;

    //Print results to screen
    printf("%d minutes is %lf days and %lf years!\nThank You!!!\n", minutes, day, year);

    return 0;
}
