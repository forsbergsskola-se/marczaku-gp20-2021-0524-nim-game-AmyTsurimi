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

	cout << "Tic Tac Toe" << endl;
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

		string playerToken = "X";
		string AItoken = "O";

		cout << "Its your Turn in what grid number do you want to place your token?" << endl;
		int playerGridNum;
		cin >> playerGridNum;
		playerGridNum = playerGridNum - 1;
		arrayIntSlot[playerGridNum] = 1;
		arraySlot[playerGridNum] = playerToken;

		cout << "AI's trun" << endl;
		int aiGridNum = rand() % 9;
		aiGridNum = aiGridNum - 1;
		arrayIntSlot[aiGridNum] = 2;
		arraySlot[aiGridNum] = AItoken;
		cout << "AI place its Token on " << aiGridNum << endl;

		int PlayerwinNumber[8];
		int AIwinNumber[8];
		PlayerwinNumber[0] = arrayIntSlot[0] + arrayIntSlot[1] + arrayIntSlot[2];
		PlayerwinNumber[1] = arrayIntSlot[3] + arrayIntSlot[4] + arrayIntSlot[5];
		PlayerwinNumber[2] = arrayIntSlot[6] + arrayIntSlot[7] + arrayIntSlot[8];
		PlayerwinNumber[3] = arrayIntSlot[0] + arrayIntSlot[3] + arrayIntSlot[6];
		PlayerwinNumber[4] = arrayIntSlot[1] + arrayIntSlot[4] + arrayIntSlot[7];
		PlayerwinNumber[5] = arrayIntSlot[2] + arrayIntSlot[5] + arrayIntSlot[8];
		PlayerwinNumber[6] = arrayIntSlot[0] + arrayIntSlot[4] + arrayIntSlot[8];
		PlayerwinNumber[7] = arrayIntSlot[2] + arrayIntSlot[4] + arrayIntSlot[6];
		/*
		cout << "Win Number " << PlayerwinNumber[0] << endl;
		*/
		int i = 0;
		for (int i = 0; i <7; i++) {
			if (PlayerwinNumber[i] == 3) {
				cout << "Player Wins!" << endl;
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
