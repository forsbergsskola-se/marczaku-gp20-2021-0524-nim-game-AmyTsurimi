// Nim.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;
int nimMatches = 24;
// Keep It Simple Stupid 
int main(int argc, char** argv)
{
    cout << "Nim-Game" << endl;
    cout << "Do you want to know the rules? [1]: Yes [0]: No" << endl;
    int yesOrNo;
    cin >> yesOrNo;
    if (yesOrNo >= 1) {
        cout << "You have " << nimMatches << " matches" << endl;
        cout << "You can draw 1, 2 or 3 matches on your turn." << endl;
        cout << "You want to be the person who draws the last match" << endl;
    }
    cout << "Rolling for who starts" << endl;
    int playerNum1 = rand() % 100;
    int aiNum1 = rand() % 100;
    if (playerNum1 >= aiNum1) {
        cout << "Player starts" << endl;
    }
    else {
        cout << "AI starts" << endl;
        int aiDraw = rand() % 3;
        nimMatches = nimMatches - aiDraw;
        cout << "AI took " << aiDraw << " of the matches." << endl;
        cout << "There is " << nimMatches << " matches left." << endl;
    }
    while (nimMatches > 0) {
        cout << "How many matches do you want to draw? Currently there is " << nimMatches << endl;
        int playerDrawNum;
        cin >> playerDrawNum;
        while (playerDrawNum > 3 || playerDrawNum <= 0) {
            cout << "Not a valid draw number. Please choose 1, 2 or 3" << endl;
            cout << "How many matches do you want to draw? Currently there is " << nimMatches << endl;
            cin >> playerDrawNum;
        }
        nimMatches = nimMatches - playerDrawNum;
        cout << "You took " << playerDrawNum << " of the matches." << endl;
        cout << "There is " << nimMatches << " matches left." << endl;
        if (nimMatches <= 0) {
            cout << "Player have won" << endl;
            break;
        }
        int aiDraw = rand() % 3; //Idk if I should bother making it more advanced later.
        nimMatches = nimMatches - aiDraw;
        cout << "AI took " << aiDraw << " of the matches." << endl;
        cout << "There is " << nimMatches << " matches left." << endl;
        if (nimMatches <= 0) {
            cout << "AI have won" << endl;
            break;
        }
    }
}