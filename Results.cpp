#include "Results.h"

void Results::incrementP1()
{
	P1Score = P1Score + 1;
}

void Results::incrementP2()
{
	P2Score = P2Score + 1;;
}

void Results::displayResults()
{
	cout << "Player 1 Score: " << P1Score << endl;
	cout << "Player 2 Score: " << P2Score << endl;
}
