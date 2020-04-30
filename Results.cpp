#include "Results.h"

void Results::incrementP1()
{
	P1Score++;
}

void Results::incrementP2()
{
	P2Score++;
}

void Results::displayResults()
{
	cout << "Player 1 Score: " << P1Score << endl;
	cout << "Player 2 Score: " << P2Score << endl;
}
