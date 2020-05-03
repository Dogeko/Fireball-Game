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

	Results(){
		P1Score = 0;
		P2Score = 0;
	}

	void incrementP1();
	void incrementP2();
	void displayResults();
};

#endif
