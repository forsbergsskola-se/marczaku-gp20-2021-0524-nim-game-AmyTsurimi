// Nim.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;
int nimMaches = 24;
const int draw1 = 1;
const int draw2 = 2;
const int draw3 = 3;
// Keep It Simple Stupid 
int main(int argc, char** argv)
{
    cout << "Nim-Game" << endl;
    cout << "Do you want to know the rules? [1]: Yes [0]: No" << endl;
    int yesOrNo;
    cin >> yesOrNo;
    if (yesOrNo >= 1) {
        cout << "You have " << nimMaches << " matches" << endl;
        cout << "You can draw 1, 2 or 3 matches on your turn." << endl;
        cout << "You want to be the person who draws the last match" << endl;
    }
    /* Work on later
    cout << "Rolling for who starts" << endl;
    int playerNum1 = rand() % 100;
    int aiNum1 = rand() % 100;
    switch (playerNum1, aiNum1)
    {
        case playerNum1 > aiNum1
    }
    */
    cout << "How many matches do you want to draw? Currently there is " << nimMaches << endl;
    int playerDrawNum;
    cin >> playerDrawNum;

    bool playerWin = 0; // 1 = true : 0 = false;
    cout << "Player have won " << playerWin << endl;
    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
