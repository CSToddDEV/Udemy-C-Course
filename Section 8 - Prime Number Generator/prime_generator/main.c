/*
Author: Calvin Todd
Assignment: This program will calculate and display the prime numbers up to 100
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int main()
{
    //Initialize variables
    int primes[LIMIT] = {2, 3};
    int primes_i = 2;
    int i = 0;
    int number_to_check = 4;

    //Loop to calculate primes
    while (number_to_check <= LIMIT)
    {
        //Check to see if number is prime by looping through known primes
        for (i = 0; i < primes_i; ++i)
        {
            //If the number is divisible by one of the primes, it is not prime, break loop
            if (number_to_check % primes[i] == 0)
            {
                break;
            }
            //If there are no primes to check, add to primes
            else
            {
                if ((i + 1) == primes_i)
                {
                    primes[primes_i] = number_to_check;
                    ++primes_i;
                }
            }
        }
        //Increasse number to check
        ++number_to_check;
    }

    //Print Primes
    printf("Here are the prime numbers up to 100: \n");
    for (i = 0; i < primes_i; ++i)
    {
        printf("%d   ", primes[i]);
    }

    return 0;
}
