/*
Author: Calvin Todd
Assignment:  Create three functions:
                1) GCD function
                2) Absolute Value function
                3) Square root function
*/

#include <stdio.h>
#include <stdlib.h>

//Function declarations
int gcd(int num_1, int num_2);
float abs_v(float num);
float square(float num);

int main()
{
    //Declare variables
    int gcd_1, gcd_2;
    float abs_value, square_value;

    //Demonstrate GCD
    printf("Please enter the first number to test the GCD method: \n");
    scanf("%d", &gcd_1);
    printf("Now the second: \n");
    scanf("%d", &gcd_2);
    gcd_1 = gcd(gcd_1, gcd_2);
    printf("\nThe Greatest Common Divisor is: %d\n\n", gcd_1);

    //Demonstrate ABS
    printf("Please enter a value to get the absolute value of: \n");
    scanf("%f", &abs_value);
    abs_value = abs_v(abs_value);
    printf("\nAbsolute value of your input is: %f\n\n", abs_value);

    //Demonstrate Square Root
    printf("Please input a value to get the square root of: \n");
    scanf("%f", &square_value);
    square_value = square(square_value);
    printf("\nSquare Root of you input is: %f\n\n", square_value);

    return 0;
}

//GCD function with recursive approach
int gcd(int num_1, int num_2)
{
    if (num_1 == 0)
    {
        return num_2;
    }
    else if (num_2 == 0)
    {
        return num_1;
    }
    else if (num_1 == num_2)
    {
        return num_1;
    }
    else if (num_1 > num_2)
    {
        return gcd(num_1 - num_2, num_2);
    }
    else
    {
        return gcd(num_1, num_2 - num_1);
    }
}

//Absolute value function
float abs_v(float num)
{
    if (num < 0)
    {
        return (num * -1);
    }
    else
    {
        return num;
    }
}

//Square root function
float square(float num)
{
    float epislon = .0001;
    float guess = 1.0;

    //Check to see if number is negative
    if (num < 0)
    {
        printf("Not positive number!");
        return 1.0;
    }

    while (abs_v(guess * guess - num) >= epislon)
    {
        guess = (num / guess + guess) / 2.0;
    }
    return guess;

}
