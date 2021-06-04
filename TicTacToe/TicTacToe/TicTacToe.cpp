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
	//int AIrow = rand() % 3;
	//int AIgrid = rand() % 3;
	int PlayerRow = rand() % 3;
	int PlayerGrid = rand() % 3;
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
	


	//Double Array grid:
	/* To do
	Need new system that works with the new arrays. Would be best if not needed to make other arrays into Double too.
	Tho might need to change depending on the turnout.
	Best would if I don't need to change the arrayIntSlot.
	
	*/
	
	//AI Move
	//---------------------------------------
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
	cout << endl;
	//---------------------------------------

	if (start == 0) {
			cout << "Rolling for who starts" << endl;
			int playerNum1 = rand() % 100;
			int aiNum1 = rand() % 100;
			if (playerNum1 >= aiNum1) {
				cout << "Player starts" << endl;
			}
			else {
				cout << "AI starts" << endl;
				int aiGridNum = rand() % 9;
				aiGridNum = aiGridNum - 1;
				int x = rand() % 9;
				while (arrayIntSlot[aiGridNum] >= 1) {
					new int; aiGridNum = rand() % 9;
				}
				arrayIntSlot[aiGridNum] = 4;
				arraySlot[aiGridNum] = AItoken;
				aiGridNum = aiGridNum + 1;
				cout << "AI place its Token on " << aiGridNum << endl;
				cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
				cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
				cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
				cout << endl;
			}
		}
	new int; start + 1;

	while (gameIsOn)
	{

		cout << "The Grid Number" << endl;
		cout << "[" << Empty[0] << "]" << "[" << Empty[1] << "]" << "[" << Empty[2] << "]" << endl;
		cout << "[" << Empty[3] << "]" << "[" << Empty[4] << "]" << "[" << Empty[5] << "]" << endl;
		cout << "[" << Empty[6] << "]" << "[" << Empty[7] << "]" << "[" << Empty[8] << "]" << endl;

		cout << "Current Grid Bord" << endl;
		cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
		cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
		cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
		cout << endl;

		//------------------------------------------------------------------------------------------------------
		cout << "Its your Turn in what grid number do you want to place your token?" << endl;
		int playerGridNum;
		cin >> playerGridNum;
		playerGridNum = playerGridNum - 1;
		while (arrayIntSlot[playerGridNum] >= 1) {
			cout << "You can't place a token ontop of another token. Please choose another number." << endl;
			cin >> playerGridNum;
			playerGridNum = playerGridNum - 1;
		}
		arrayIntSlot[playerGridNum] = 1;
		arraySlot[playerGridNum] = playerToken;
		playerGridNum = playerGridNum + 1;
		cout << "Player place its Token on " << playerGridNum << endl;
		cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
		cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
		cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
		cout << endl;

		//cout << endl;
		//------------------------------------------------------------------------------------------------------
		cout << "AI's trun" << endl;
		int aiGridNum = rand() % 9;
		aiGridNum = aiGridNum - 1;
		int x = rand() % 9;
		while (arrayIntSlot[aiGridNum] >= 1) {
			new int; aiGridNum = rand() % 9;
		}
		arrayIntSlot[aiGridNum] = 4;
		arraySlot[aiGridNum] = AItoken;
		aiGridNum = aiGridNum + 1;
		cout << "AI place its Token on " << aiGridNum << endl;

		int PlayerwinNumber[8];
		int AIwinNumber[8];
		int PlayerwinNumberD1 = 0;
		int PlayerwinNumberD2 = 0;
		int AIwinNumberD1 = 0;
		int AIwinNumberD2 = 0;

		PlayerwinNumber[0] = arrayIntSlot[0] + arrayIntSlot[1] + arrayIntSlot[2];
		PlayerwinNumber[1] = arrayIntSlot[3] + arrayIntSlot[4] + arrayIntSlot[5];
		PlayerwinNumber[2] = arrayIntSlot[6] + arrayIntSlot[7] + arrayIntSlot[8];
		PlayerwinNumber[3] = arrayIntSlot[0] + arrayIntSlot[3] + arrayIntSlot[6];
		PlayerwinNumber[4] = arrayIntSlot[1] + arrayIntSlot[4] + arrayIntSlot[7];
		PlayerwinNumber[5] = arrayIntSlot[2] + arrayIntSlot[5] + arrayIntSlot[8];

		AIwinNumber[0] = arrayIntSlot[0] + arrayIntSlot[1] + arrayIntSlot[2];
		AIwinNumber[1] = arrayIntSlot[3] + arrayIntSlot[4] + arrayIntSlot[5];
		AIwinNumber[2] = arrayIntSlot[6] + arrayIntSlot[7] + arrayIntSlot[8];
		AIwinNumber[3] = arrayIntSlot[0] + arrayIntSlot[3] + arrayIntSlot[6];
		AIwinNumber[4] = arrayIntSlot[1] + arrayIntSlot[4] + arrayIntSlot[7];
		AIwinNumber[5] = arrayIntSlot[2] + arrayIntSlot[5] + arrayIntSlot[8];

		PlayerwinNumberD1 = arrayIntSlot[0] + arrayIntSlot[4] + arrayIntSlot[8];
		PlayerwinNumberD2 = arrayIntSlot[2] + arrayIntSlot[4] + arrayIntSlot[6];

		AIwinNumberD1 = arrayIntSlot[0] + arrayIntSlot[4] + arrayIntSlot[8];
		AIwinNumberD2 = arrayIntSlot[2] + arrayIntSlot[4] + arrayIntSlot[6];
		/*
		
		cout << "Win Number " << PlayerwinNumber[0] << endl;
		*/
		
		for (int i = 0; i <7; i++) {
			
			if (PlayerwinNumber[i] == 3) {
				cout << "Player Wins!" << endl;
				cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
				cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
				cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (PlayerwinNumber[i] == 12) {
				cout << "AI Wins!" << endl;
				cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
				cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
				cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayIntSlot[0] == 1 && arrayIntSlot[4] == 1 && arrayIntSlot[8] == 1) {
				cout << "Player Wins!" << endl;
				cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
				cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
				cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
				cout << endl;
				gameIsOn = false;
				break;
			}
			if (arrayIntSlot[0] == 4 && arrayIntSlot[4] == 4 && arrayIntSlot[8] == 4) {
				cout << "AI Wins!" << endl;
				cout << "[" << arraySlot[0] << "]" << "[" << arraySlot[1] << "]" << "[" << arraySlot[2] << "]" << endl;
				cout << "[" << arraySlot[3] << "]" << "[" << arraySlot[4] << "]" << "[" << arraySlot[5] << "]" << endl;
				cout << "[" << arraySlot[6] << "]" << "[" << arraySlot[7] << "]" << "[" << arraySlot[8] << "]" << endl;
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
