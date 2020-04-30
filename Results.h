#ifndef RESULTS_H
#define RESULTS_H

#include <iostream>
using namespace std;

class Results
{
private:
	int P1Score;
	int P2Score;
public:
	void incrementP1();
	void incrementP2();
	void displayResults();
};

#endif