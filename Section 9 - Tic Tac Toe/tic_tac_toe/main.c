/*
Author: Calvin Todd
Assignment: A very basic console tic-tac-toe game!
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Function declarations
void printBoard(int player_turn);
int makeAMove(int player_turn);
bool checkForWin(bool winner);

//Global Variables
char board_array[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

//Main function
int main()
{
    //Initialize Variables
    int player_turn = 1;
    bool winner = false;
    int turn_count = 0;

    while (!winner)
    {
        turn_count += 1;
        printBoard(player_turn);
        makeAMove(player_turn);
        winner = checkForWin(winner);
        if (winner)
        {
            printf("\nCongratulations Player %d you have won!", player_turn);
        }
        else if (turn_count == 9)
        {
            printf("\n\n******The game is a draw******");
        }
        else
        {
            player_turn = (player_turn == 1) ? 2 : 1;
        }
    }


    return 0;
}

//Print board
void printBoard(int player_turn)
{
    system("clear");

    printf("Player 1 (X) --- Player 2 (O)\n");
    printf("It is Player %d's turn!\n\n", player_turn);
    printf("     |   |   \n");
    printf("   %c | %c | %c\n", board_array[1], board_array[2], board_array[3]);
    printf("     |   |   \n");
    printf("  ___________\n");
    printf("     |   |   \n");
    printf("   %c | %c | %c\n", board_array[4], board_array[5], board_array[6]);
    printf("     |   |  \n");
    printf("  ___________\n");
    printf("     |   |   \n");
    printf("   %c | %c | %c\n", board_array[7], board_array[8], board_array[9]);
    printf("     |   |   \n");
}

//Make a move
int makeAMove(int player_turn)
{
    char move;
    int move_check;
    char symbol;
    bool valid = false;

    //Assign symbol
    if (player_turn == 1)
    {
        symbol = 'X';
    }
    else
    {
        symbol = 'O';
    }

    //Get move
    printf("Player %d, please make a move: ", player_turn);
    scanf(" %c", &move);

    //Validate Move
    while (!valid)
    {
        move_check = (int) move - 48;
        if ( move_check > 0 && move_check < 10)
        {
            if (board_array[move_check] == move)
            {
                board_array[move_check] = symbol;
                valid = true;
            }
        }
        if (!valid)
        {
            printf("\nInvalid move please try again: ");
            scanf(" %c", &move);
        }
    }

    return 0;
}

//Check for a winner
bool checkForWin(bool winner)
{
    char symbol;
    int winner_i;

    //Check horizontals
    winner_i = 1;
    while (winner_i < 10)
    {
        symbol = board_array[winner_i];
        if (board_array[winner_i + 1] == symbol)
        {
            if (board_array[winner_i + 2] == symbol)
            {
                winner = true;
                return winner;
            }
        }
        winner_i += 3;
    }

    //Check verticals
    winner_i = 1;
    while (winner_i < 4)
    {
        symbol = board_array[winner_i];
        if (board_array[winner_i + 3] == symbol)
        {
            if (board_array[winner_i + 6] == symbol)
            {
                winner = true;
                return winner;
            }
        }
        winner_i += 1;
    }

    //Check first diagonal
    winner_i = 1;
    symbol = board_array[winner_i];
    if (board_array[winner_i + 4] == symbol)
    {
        if (board_array[winner_i + 8] ==  symbol)
        {
            winner = true;
            return winner;
        }
    }

    //Check second diagonal
    winner_i = 3;
    symbol = board_array[winner_i];
    if (board_array[winner_i + 2] == symbol)
    {
        if (board_array[winner_i + 4] ==  symbol)
        {
            winner = true;
            return winner;
        }
    }

    return winner;
}
