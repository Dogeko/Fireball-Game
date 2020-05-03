/*
 * Player.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
using namespace std;

class Player
{
protected:
	int choice;
	int charges;

public:
	int getChoice(){

		return choice;
	}

	void setChoice(int Choices){

		choice = Choices;
	}

	virtual void pick() = 0;
};

#endif /* PLAYER_H_ */
