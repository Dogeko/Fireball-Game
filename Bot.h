#ifndef BOT_H
#define BOT_H

#include <iostream>
#include "Player.h"

using namespace std;

class Bot : public Player
{
protected:
	int charges;
	int choice;
public:
	int getCharges();
	int getChoice();
	void setChoice(int choice);
	void pick();
};

#endif
