// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	
	int Empty[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arrayIntSlot[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	string arraySlot[9] = { " ", " ", " ", " " , " " , " " , " " , " " , " " };
	bool gameIsOn = true;
	int i = 0;
	bool start = true;
	cout << "Tic Tac Toe" << endl;
	string playerToken = "[X]";
	string AItoken = "[O]";
	srand(time(0));
	int arrayDoubleSlotInt[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0} };

	//Grid V2
	string gridNumber[3][3] = {
		{ "[7]", "[8]", "[9]"},
		{ "[4]", "[5]", "[6]"},
		{ "[1]", "[2]", "[3]"} };

	string arrayDoubleSlot[3][3] = { 
		{ "[ ]", "[ ]", "[ ]"}, 
		{ "[ ]", "[ ]", "[ ]"}, 
		{ "[ ]", "[ ]", "[ ]"} };
	
	

	if (start == true) {
			cout << "Rolling for who starts" << endl;
			int playerNum1 = rand() % 100;
			int aiNum1 = rand() % 100;
			if (playerNum1 >= aiNum1) {
				cout << "Player starts" << endl;
			}
			else {
				cout << "AI starts" << endl;
				int AIrow = rand() % 3;
				int AIgrid = rand() % 3;

				while (arrayDoubleSlotInt[AIgrid][AIrow] >= 1) {
					new int; AIrow = rand() % 3;
					new int; AIgrid = rand() % 3;
				}

				arrayDoubleSlotInt[AIgrid][AIrow] = 4;
				arrayDoubleSlot[AIgrid][AIrow] = AItoken;
				cout << "AI place its Token on " << gridNumber[AIgrid][AIrow] << endl;

				for (int g = 0; g < 3; g++) {
					for (int r = 0; r < 3; r++) {
						cout << arrayDoubleSlot[g][r];
					}
					cout << endl;
				}

				cout << endl;
			}
		}
	start = false; // Need to fix the First time roll.

	while (gameIsOn)
	{
		cout << "The Grid Number" << endl;
		string gridNumber[3][3] = {
			{ "[7]", "[8]", "[9]"},
			{ "[4]", "[5]", "[6]"},
			{ "[1]", "[2]", "[3]"} };

		for (int g = 0; g < 3; g++) {
			for (int r = 0; r < 3; r++) {
				cout << gridNumber[g][r];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Current Grid Bord" << endl;

		for (int g = 0; g < 3; g++) {
			for (int r = 0; r < 3; r++) {
				cout << arrayDoubleSlot[g][r];
			}
			cout << endl;
		}

		//------------------------------------------------------------------------------------------------------
		cout << "Its your Turn in what grid number do you want to place your token?" << endl;
		int playerGridNum;
		cin >> playerGridNum;
		int PlayerGrid;
		int PlayerRow;

		switch (playerGridNum)
		{
		case 1:
			new int; PlayerGrid = 2;
			new int; PlayerRow = 0;
			break;
		case 2:
			new int; PlayerGrid = 2;
			new int; PlayerRow = 1;
			break;
		case 3:
			new int; PlayerGrid = 2;
			new int; PlayerRow = 2;
			break;

		case 4:
			new int; PlayerGrid = 1;
			new int; PlayerRow = 0;
			break;
		case 5:
			new int; PlayerGrid = 1;
			new int; PlayerRow = 1;
			break;
		case 6:
			new int; PlayerGrid = 1;
			new int; PlayerRow = 2;
			break;

		case 7:
			new int; PlayerGrid = 0;
			new int; PlayerRow = 0;
			break;
		case 8:
			new int; PlayerGrid = 0;
			new int; PlayerRow = 1;
			break;
		case 9:
			new int; PlayerGrid = 0;
			new int; PlayerRow = 2;
			break;
		}

		while (arrayDoubleSlotInt[PlayerGrid][PlayerRow] >= 1) {
			cout << "You can't place a token ontop of another token. Please choose another number." << endl;
			cin >> playerGridNum;
			switch (playerGridNum)
			{
			case 1:
				new int; PlayerGrid = 2;
				new int; PlayerRow = 0;
			case 2:
				new int; PlayerGrid = 2;
				new int; PlayerRow = 1;
			case 3:
				new int; PlayerGrid = 2;
				new int; PlayerRow = 2;

			case 4:
				new int; PlayerGrid = 1;
				new int; PlayerRow = 0;
			case 5:
				new int; PlayerGrid = 1;
				new int; PlayerRow = 1;
			case 6:
				new int; PlayerGrid = 1;
				new int; PlayerRow = 2;

			case 7:
				new int; PlayerGrid = 0;
				new int; PlayerRow = 0;
			case 8:
				new int; PlayerGrid = 0;
				new int; PlayerRow = 1;
			case 9:
				new int; PlayerGrid = 0;
				new int; PlayerRow = 2;
			}
		}
		arrayDoubleSlotInt[PlayerGrid][PlayerRow] = 1;
		arrayDoubleSlot[PlayerGrid][PlayerRow] = playerToken;
		cout << "Player place its Token on " << gridNumber[PlayerGrid][PlayerRow] << endl;
		cout << endl;

		//------------------------------------------------------------------------------------------------------
		cout << "AI's trun" << endl;
		int AIrow = rand() % 3;
		int AIgrid = rand() % 3;

		while (arrayDoubleSlotInt[AIgrid][AIrow] >= 1) {
			new int; AIrow = rand() % 3;
			new int; AIgrid = rand() % 3;
		}

		arrayDoubleSlotInt[AIgrid][AIrow] = 4;
		arrayDoubleSlot[AIgrid][AIrow] = AItoken;
		cout << "AI place its Token on " << gridNumber[AIgrid][AIrow] << endl;


		//------------------------------------------------------------------------------------------------------
		int PlayerwinNumber[6];
		int AIwinNumber[6];
		int PlayerwinNumberD1 = 0;
		int PlayerwinNumberD2 = 0;
		int AIwinNumberD1 = 0;
		int AIwinNumberD2 = 0;

		//Horizontelt P1
		PlayerwinNumber[0] = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[0][1] + arrayDoubleSlotInt[0][2];
		PlayerwinNumber[1] = arrayDoubleSlotInt[1][0] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[1][2];
		PlayerwinNumber[2] = arrayDoubleSlotInt[2][0] + arrayDoubleSlotInt[2][1] + arrayDoubleSlotInt[2][2];
		//Verticalt P1
		PlayerwinNumber[3] = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[1][0] + arrayDoubleSlotInt[2][0];
		PlayerwinNumber[4] = arrayDoubleSlotInt[0][1] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][1];
		PlayerwinNumber[5] = arrayDoubleSlotInt[0][2] + arrayDoubleSlotInt[1][2] + arrayDoubleSlotInt[2][2];

		//Horizontelt CPU
		AIwinNumber[0] = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[0][1] + arrayDoubleSlotInt[0][2];
		AIwinNumber[1] = arrayDoubleSlotInt[1][0] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[1][2];
		AIwinNumber[2] = arrayDoubleSlotInt[2][0] + arrayDoubleSlotInt[2][1] + arrayDoubleSlotInt[2][2];
		//Verticalt CPU
		AIwinNumber[3] = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[1][0] + arrayDoubleSlotInt[2][0];
		AIwinNumber[4] = arrayDoubleSlotInt[0][1] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][1];
		AIwinNumber[5] = arrayDoubleSlotInt[0][2] + arrayDoubleSlotInt[1][2] + arrayDoubleSlotInt[2][2];
		
		for (int i = 0; i <7; i++) {
			
			if (PlayerwinNumber[i] == 3) {
				cout << "Player Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayDoubleSlotInt[0][0] == 1 && arrayDoubleSlotInt[1][1] == 1 && arrayDoubleSlotInt[2][2] == 1) {
				cout << "Player Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayDoubleSlotInt[2][0] == 1 && arrayDoubleSlotInt[1][1] == 1 && arrayDoubleSlotInt[0][2] == 1) {
				cout << "Player Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			//------------------------------------------------------------------------------------------------------
			if (PlayerwinNumber[i] == 12) {
				cout << "AI Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayDoubleSlotInt[0][0] == 4 && arrayDoubleSlotInt[1][1] == 4 && arrayDoubleSlotInt[2][2] == 4) {
				cout << "AI Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayDoubleSlotInt[2][0] == 4 && arrayDoubleSlotInt[1][1] == 4 && arrayDoubleSlotInt[0][2] == 4) {
				cout << "AI Wins!" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
		}
		i = 0;
		cout << endl;
	}
}