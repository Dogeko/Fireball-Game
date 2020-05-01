#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
using namespace std;

class Human
{
protected:
	int choices;
	int charges = 0;
public:
	int getCharges();
	int getChoice();
  void setChoice(int choice);
	virtual void Pick();
};

#endif
