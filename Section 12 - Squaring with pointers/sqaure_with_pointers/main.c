5/*
Author: Calvin Todd
Assignment:  Using pass by reference, square a number.
*/

#include <stdio.h>
#include <stdlib.h>

//Function Declarations
void square(int *const pNum);

int main()
{
    //Initialize variables
    int num;
    int *const pNum = &num;

    //Get integer to square
    printf("Please input a number to square: \n");
    scanf("%d", pNum);

    //Pass reference to function
    square(pNum);

    //Print result
    printf("\nThe result is: %d", *pNum);

    return 0;
}

//Function to square
void square(int *const pNum)
{
    * pNum = * pNum * * pNum;
}
