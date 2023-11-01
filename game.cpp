/*
ENGR 2103
Final Project
Chutes & Ladders
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <time.h>

using namespace std;
void board (int position) // void function for board
{
    {
		const char * board[5][8] =
		{ "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", 
        "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", 
        "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", 
        "32", "33", "34", "35", "36", "37", "38", "39", "40" };
		if (position == 1 || position == 2 || position == 3 || position == 4
			|| position == 5 || position == 6 || position == 7 || position == 8)
		  {
			board[0][position - 1] = "Player"; // displays where the player is at each line
		  }

		if (position == 9 || position == 10 || position == 11 || position == 12
			|| position == 13 || position == 14 || position == 15
			|| position == 16)
		  {
			board[1][position - 9] = "Player";
		  }

		if (position == 17 || position == 18 || position == 19 || position == 20
			|| position == 21 || position == 22 || position == 23
			|| position == 24)
		  {
			board[2][position - 17] = "Player";
		  }

		if (position == 25 || position == 26 || position == 27 || position == 28
			|| position == 29 || position == 30 || position == 31
			|| position == 32)
		  {
			board[3][position - 25] = "Player";
		  }

		if (position == 33 || position == 34 || position == 35 || position == 36
			|| position == 37 || position == 38 || position == 39
			|| position == 40)
		  {
			board[4][position - 33] = "Player";
		  }

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 8; j++)
			{
		        cout << board[i][j] << "\t"; // puts a space between each number to even spread it out
			}
			cout << endl;
			cout << endl;
		}
	}
}
int ladders (int position) // function for when they land a ladder and get to move up a space
{
    if (position == 4) 
    {
        cout << "\nIs this code in Python? type 'yes' or 'no'" << endl; // asks a question
	    string Qanswer;
	    cin >> Qanswer;
	  
	    if (Qanswer == "no") // if the answer is correct they move up a space
        {
	        position = 13;
	        cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
	    }
	    else // if the answer is incorrect they lose thier turn
        {
	        cout << "\nThat answer was incorrect, you don't get to go up the ladder :( \n";
	    }
	}
	else if (position == 12)
	{
		cout << "\nIs an array the same as a vector? type 'yes' or 'no'" << endl;
		string Qanswer;
	 
		cin >> Qanswer;
		if ( Qanswer == "no") 
        {
		    position = 20;
		    cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
		}
		else 
        {
		    cout << "\nThat answer was incorrect, you don't get to go up the ladder :( \n";
		}
	}
	else if (position == 16)
	{ 
	    cout << "\nCan a string have numbers in it? type 'yes' or 'no'" << endl;
	    string Qanswer;
   
	    cin >> Qanswer;
	    if ( Qanswer == "yes") 
        {
		    position = 18;
		    cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
	    }
	    else 
        {
		    cout << "\nThat answer was incorrect, you don't get to go up the ladder :( \n";
		}
	}
    else if (position == 23)
	{
	    position = 25;
	    cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
	}
    else if (position == 27)
	{
	    position = 38;
	    cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
	}
    else if (position == 29)
	{
	    position = 35;
	    cout << "\nYou've landed on a ladder you get to move up to space: " << position << endl;
	}
    else
	{
	    position = position;
	}
	return position;

}


int chutes (int position) // function for when they land a chute and move down a space
{
    if (position == 10)
	{
	    position = 8;
	    cout << "\nYou have landed on a chute and will move down to space: " << position << endl;
	}
    else if (position == 19)
	{
	    position = 15;
	    cout << "\nYou have landed on a chute and will move down to space: " << position << endl;
	}
    else if (position == 28)
	{
	    position = 11;
	    cout << "\nYou have landed on a chute and will move down to space: " << position << endl;
	}
    else if (position == 34)
	{
	    position = 17;
	    cout << "\nYou have landed on a chute and will move down to space: " << position << endl;
	}
    else if (position == 39)
	{
	    position = 22;
	    cout << "\nYou have landed on a chute and will move down to space: " << position << endl;
	}
    else
	{
	    position = position;
	}
	return position;
}

int main ()
{
    int dice;
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int lastp1 = 0;
    int lastp2 = 0;
    int lastp3 = 0;
    int lastp4 = 0;
    int playerNum;
    int position;
    string rollYesStop;
    bool winner = false;

    // how the games runs
    // instuctions for the game
    cout << "This is our code representation of the board game chutes and ladders. ";
    cout << "To start the game you would need to enter the amount of players between 2 - 4\n";
    cout << "For each player's turn they'll enter yes to roll their dice and if you want to stop the game enter stop. ";
    cout << "As the games goes on there will be chutes and ladders which will either bring you up or down.\n";
    cout << "There will also be questions needed to answer in certain positions when you land on it. ";
    cout << "If you get it wrong you'll lose that turn and it'll move onto to the next players. ";
    cout << "If you get it right you'll move up to the position determined.\n" << endl;

    cout << "How many players will there be?\n2 - 4 players\n";
    cin >> playerNum;

    while ((playerNum < 2) || (playerNum > 4)) // loops if players are less than 2 or more than 4
    {
	    if ((playerNum >= 2) && (playerNum <= 4))
	    {
	        cout << playerNum << " players chosen." << endl;
	    }
	    else
	    {
	        cout << "Invalid Entry, try again." << endl;
	        cout << "How many players will there be?\n2 - 4 players\n";
	        cin >> playerNum;
	    }
    }

    while (winner == false) // Loops the game while there is no winner.
    {
	    for (int i = 1; i <= playerNum; ++i) // Loops through the players turns.
	    {
	        while ((rollYesStop != "yes") && (rollYesStop != "Yes") && (rollYesStop != "stop") && (rollYesStop != "Stop")) // loops until the received input is either "yes" or "stop".
	        {
                cout << "It is player " << i << "'s turn." << endl;
	            cout << "Type \"yes\" to roll the dice, or type \"stop\" to end the game." << endl;
	            cin >> rollYesStop;
	            if ((rollYesStop == "yes") || (rollYesStop == "Yes")) //continues game.
	            {
		  
	            }
	            else if ((rollYesStop == "stop") || (rollYesStop == "Stop")) //ends game immediately.
	            {
		            return 0;
	            }
	            else // If the input does not match "yes" or "stop".
	            {
		            cout << "Invalid entry, please try again..." << endl;
	            }
	        }
	        srand(time(NULL)); // sets the seed to make the number random
	        dice = (rand () % (6 - 1 + 1)) + 1; // rolls a dice with the numbers between 1-6
	        cout << "\nYou've rolled a " << dice << endl;
	        if (i == 1) // branching for each player
            {
		        if (winner) // when winner is true the game ends
		        {
		            return 0;
		        }
		        position = lastp1 + dice; //updates the temporary variable to the saved player position.
		        position = ladders (position); // checks if the position lands on a ladder
		        position = chutes (position); // checks if the position lands on a chute
		        if (position > 40)
		        {
		            position = position - dice; // keeps the player below 40
		            cout << "\nYou have rolled a number over 40! Your roll has been nullified!" << endl;
		        }
		        else if (position == 40)
		        {
		            cout << "\nCongratulations! You have landed on position 40! Player 1 wins!" << endl;
		            winner = true; // the player wins and the loop ends
		        }
		        cout << "player 1 = " << position << endl;
		        board (position); // displays where the player is afte each turn
		        p1 = position; // updates the saved player value.
	        }
		    else if (i == 2)
		    {
		        if (winner)
		        {
		            return 0;
		        }
		        position = lastp2 + dice;
		        position = ladders (position);
		        position = chutes (position);
		        if (position > 40)
		        {
		            position = position - dice;
		            cout << "\nYou have rolled a number over 40! Your roll has been nullified!" << endl;
		        }
		        else if (position == 40)
		        {
		            cout << "\nCongratulations! You have landed on position 40! Player 2 wins!" << endl;
		            winner = true;
		        }
		        cout << "player 2 = " << position << endl;
		        board (position);
		        p2 = position;
		    }
		    else if (i == 3)
		    {
		        if (winner)
		        {
		            return 0;
		        }
		        position = lastp3 + dice;
		        position = ladders (position);
		        position = chutes (position);
		        if (position > 40)
		        {
		            position = position - dice;
		            cout << "\nYou have rolled a number over 40! Your roll has been nullified!" << endl;
		        }
		        else if (position == 40)
		        {
		            cout << "\nCongratulations! You have landed on position 40! Player 3 wins!" << endl;
		            winner = true;
		        }
		        cout << "player 3 = " << position << endl;
		        board (position);
		        p3 = position;
		    }
		    else if (i == 4)
		    {
		        if (winner)
		        {
		            return 0;
		        }
		        position = lastp4 + dice;
		        position = ladders (position);
		        position = chutes (position);
		        if (position > 40)
		        {
		            position = position - dice;
		            cout << "\nYou have rolled a number over 40! Your roll has been nullified!" << endl;
		        }
		        else if (position == 40)
		        {
		            cout << "\nCongratulations! You have landed on position 40! Player 4 wins!" << endl;
		            winner = true;
		        }
		        cout << "player 4 = " << position << endl;
		        board (position);
		        p4 = position;
		    }
	        lastp1 = p1;
		    lastp2 = p2;
		    lastp3 = p3;
		    lastp4 = p4;
		    rollYesStop = "reset";
	    }
    }

	return 0;
}
