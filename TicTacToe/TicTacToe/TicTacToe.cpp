// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;
/*
void a();
void b();


int main(bool OnOff = true)
{
	a(true);

}

void a(bool OnOff) {
	cout << "Print a" << endl;
	if (OnOff = false) {
		return;
	}
	else {
		b();	
	}
}

void b() {
	cout << "Print b" << endl;
	a(false);
}
*/

int main()
{
	
	int Empty[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arrayIntSlot[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	string arraySlot[9] = { " ", " ", " ", " " , " " , " " , " " , " " , " " };
	bool gameIsOn = true;
	int i = 0;
	int start = 0;
	cout << "Tic Tac Toe" << endl;
	string playerToken = "[X]";
	string AItoken = "[O]";
	srand(time(0));
	int arrayDoubleSlotInt[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0} };

	//Grid V2
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
	string arrayDoubleSlot[3][3] = { 
		{ "[ ]", "[ ]", "[ ]"}, 
		{ "[ ]", "[ ]", "[ ]"}, 
		{ "[ ]", "[ ]", "[ ]"} };
		
	for (int g = 0; g < 3; g++) {
		for (int r = 0; r < 3; r++) {
			cout << arrayDoubleSlot[g][r];
		}
		cout << endl;
	}
	
	

	if (start == 0) {
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
				string arrayDoubleSlot[3][3] = {
					{ "[ ]", "[ ]", "[ ]"},
					{ "[ ]", "[ ]", "[ ]"},
					{ "[ ]", "[ ]", "[ ]"} };

				for (int g = 0; g < 3; g++) {
					for (int r = 0; r < 3; r++) {
						cout << arrayDoubleSlot[g][r];
					}
					cout << endl;
				}

				cout << endl;
			}
		}
	new int; start + 1;

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
		string arrayDoubleSlot[3][3] = {
			{ "[ ]", "[ ]", "[ ]"},
			{ "[ ]", "[ ]", "[ ]"},
			{ "[ ]", "[ ]", "[ ]"} };

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

		switch (playerGridNum)
		{
		case 1:
			int PlayerGrid = 2;
			int PlayerRow = 0;
		case 2:
			int PlayerGrid = 2;
			int PlayerRow = 1;
		case 3:
			int PlayerGrid = 2;
			int PlayerRow = 2;

		case 4:
			int PlayerGrid = 1;
			int PlayerRow = 0;
		case 5:
			int PlayerGrid = 1;
			int PlayerRow = 1;
		case 6:
			int PlayerGrid = 1;
			int PlayerRow = 2;

		case 7:
			int PlayerGrid = 0;
			int PlayerRow = 0;
		case 8:
			int PlayerGrid = 0;
			int PlayerRow = 1;
		case 9:
			int PlayerGrid = 0;
			int PlayerRow = 2;
		}

		while (arrayDoubleSlotInt[PlayerGrid][PlayerRow] >= 1) {
			cout << "You can't place a token ontop of another token. Please choose another number." << endl;
			cin >> playerGridNum;
			switch (playerGridNum)
			{
			case 1:
				int PlayerGrid = 2;
				int PlayerRow = 0;
			case 2:
				int PlayerGrid = 2;
				int PlayerRow = 1;
			case 3:
				int PlayerGrid = 2;
				int PlayerRow = 2;

			case 4:
				int PlayerGrid = 1;
				int PlayerRow = 0;
			case 5:
				int PlayerGrid = 1;
				int PlayerRow = 1;
			case 6:
				int PlayerGrid = 1;
				int PlayerRow = 2;

			case 7:
				int PlayerGrid = 0;
				int PlayerRow = 0;
			case 8:
				int PlayerGrid = 0;
				int PlayerRow = 1;
			case 9:
				int PlayerGrid = 0;
				int PlayerRow = 2;
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

		/*
		PlayerwinNumberD1 = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][2];
		PlayerwinNumberD2 = arrayDoubleSlotInt[0][2] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][0];

		AIwinNumberD1 = arrayDoubleSlotInt[0][0] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][2];
		AIwinNumberD2 = arrayDoubleSlotInt[0][2] + arrayDoubleSlotInt[1][1] + arrayDoubleSlotInt[2][0];
		*/
		
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


/*
	Player: X
	AI:		O
	Roll of who start
	RNG AI

	Grid:
	[ ][ ][ ]
	[ ][ ][ ]
	[ ][ ][ ]
	cout << "[" << Empty << "]" << "[" << Empty << "]" << "[" << Empty << "]" << endl;
	cout << "[" << Empty << "]" << "[" << Empty << "]" << "[" << Empty << "]" << endl;
	cout << "[" << Empty << "]" << "[" << Empty << "]" << "[" << Empty << "]" << endl;
	*/

	/*
			switch (PlayerwinNumber[7])
			{
			case 1:
				PlayerwinNumber[0] = arrayIntSlot[0] + arrayIntSlot[1] + arrayIntSlot[2];
				if (PlayerwinNumber[0] == 3)
					cout << "Player Wins!" << endl;
					break;

			case 2:
				PlayerwinNumber[1] = arrayIntSlot[3] + arrayIntSlot[4] + arrayIntSlot[5];
				if (PlayerwinNumber[1] == 3)
					cout << "Player Wins!" << endl;
					break;

			case 3:
				PlayerwinNumber[2] = arrayIntSlot[6] + arrayIntSlot[7] + arrayIntSlot[8];
				if (PlayerwinNumber[2] == 3)
					cout << "Player Wins!" << endl;
					break;
			case 4:
				PlayerwinNumber[3] = arrayIntSlot[0] + arrayIntSlot[3] + arrayIntSlot[6];
				if (PlayerwinNumber[3] == 3)
					cout << "Player Wins!" << endl;
					break;

			case 5:
				PlayerwinNumber[4] = arrayIntSlot[1] + arrayIntSlot[4] + arrayIntSlot[7];
				if (PlayerwinNumber[4] == 3)
					cout << "Player Wins!" << endl;
					break;

			case 6:
				PlayerwinNumber[5] = arrayIntSlot[2] + arrayIntSlot[5] + arrayIntSlot[8];
				if (PlayerwinNumber[5] == 3)
					cout << "Player Wins!" << endl;
					break;
			case 7:
				PlayerwinNumber[6] = arrayIntSlot[0] + arrayIntSlot[4] + arrayIntSlot[8];
				if (PlayerwinNumber[6] == 3)
					cout << "Player Wins!" << endl;
					break;

			case 8:
				PlayerwinNumber[7] = arrayIntSlot[2] + arrayIntSlot[4] + arrayIntSlot[6];
				if (PlayerwinNumber[7] == 3)
					cout << "Player Wins!" << endl;
					break;

			}
			*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
