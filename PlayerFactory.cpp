/*
 * PlayerFactory.cpp
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#include "PlayerFactory.h"

Player *PlayerFactory::pickPlayer(char opponent){

		switch(opponent){

		case 1:
			return new HumanPlayer();

		case 2:
			return new BotPlayer();

		default:
			return new HumanPlayer();
		}
	}

