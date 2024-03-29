#include "stdafx.h"
#include"Card.h"
#include"Deck.h"
#include"Player.h" // include all clases 
#include<iostream>

using std::cin;  
using std::cout; 
using std::endl;

int main()
{
	char playerName[64]; // variable which is used to input user name  
	bool indexForName = true; // use it as flag to see if the user has written new name ot uses  
	 // one that already exists, also if the user used eisting player this flag will prevent from entering new player
	Player player("Ivan Ivanov", 5, 0.8), player1("Petar Popov", 4, 1), 
		   player2("Kiril Petkov", 2, 0.5); // create player from witch user can choose

	player.printPlayer(); // displays players 
	player1.printPlayer();
	player2.printPlayer();

	cout << "Chose a player or enter a new player: " << endl;
	cout << "$ ";
	cin.sync();
	cin.getline(playerName, 64); // we use cin.getline(), because there must be space between two names

	if (strcmp(playerName,"Ivan Ivanov") == 0) // create verification if the name answers
	{                                          // to one of the existing player names 
		player.play();  // if the condition is satisfied, the game begins

		indexForName = false; //  flag turns to false to prevent from entering a new player 
	}
	if (strcmp(playerName, "Petar Popov") == 0)
	{
		player1.play();

		indexForName = false;
	}
	if (strcmp(playerName, "Kiril Petkov") == 0)
	{
		player2.play();

		indexForName = false;
	}
	if (indexForName == true) //if the user wants to create a new player 
	{
		Player customPlayer; // create new player
		cin >> customPlayer; // input player data

		customPlayer.play();
	}


	system("pause");
	return 0;
}

