#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
using namespace std;

class Human
{
protected:
	int choice;
	int charges;
public:
	int getCharges();
	int getChoice();
	virtual void Pick();
};

#endif
