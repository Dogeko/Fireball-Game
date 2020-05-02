/*
 * PlayerFactory.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef PLAYERFACTORY_H_
#define PLAYERFACTORY_H_

#include <iostream>
#include "Player.h"
#include "Human.h"
//#include "Bot.h"
using namespace std;

class PlayerFactory : public Player{

public:
	static Player *pickPlayer(char opponent){

		switch(opponent){

		case 1:
			return Human();

		case 2:
//			return Bot();

		default:
			return Human();
		}
	}

};

#endif /* PLAYERFACTORY_H_ */
