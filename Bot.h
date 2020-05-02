#ifndef BOT_H
#define BOT_H

#include <iostream>
using namespace std;

class Bot
{
protected:
	int charges;
	int choice;
public:
	int getCharges();
	int getChoice();
	void setChoice(int choice);
	virtual void pick();
};

#endif