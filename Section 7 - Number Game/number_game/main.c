/*
Author: Calvin Todd
Assignment: A game where the program assigns a random number between 0-20 and the user has 3 chances to guess it
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Initialize variables
    time_t t;
    int mystery_number;
    int guess;
    int turns = 5;

    //Get and store random number
    srand((unsigned) time(&t));
    mystery_number = rand() % 21;

    //Print directions
    printf("***************************\nWelcome!  The computer has chosen a random number \nand you will have 5 chances to guess it!  Let's begin!\n***************************\n\n");

    //While loop for game
    while (guess != mystery_number)
    {
        //Check to see if there are any turns left and if so get the guess
        if (turns == 0)
        {
            printf("You have run out of guesses!  Better luck next time!\n");
            break;
        }
        else
        {
            printf("You have %d guess(es) left!\nPlease guess a number: ", turns);
            scanf("%d", &guess);
            while (guess < 0 || guess > 20)
            {
                printf("Your guess was invalid, it must be between 0 and 20!\nPlease try again: ");
                scanf("%d", &guess);
            }
            turns -= 1;
        }
        //Evaluate the guess
        if (guess == mystery_number)
        {
            printf("\nYou have guessed %d, which was the mystery number with %d tries remaining!\n Congratulations you won!!!\n", mystery_number, turns);
            break;
        }
        else if (guess < mystery_number)
        {
            printf("\nYour guess of %d was too low!\n", guess);
        }
        else if (guess > mystery_number)
        {
            printf("\nYour guess of %d was too high!\n", guess);
        }
    }

    printf("Thank you for playing!  Cheers!\n");

    return 0;
}
