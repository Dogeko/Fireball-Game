/*
 * HumanNoChargeState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANNOCHARGESTATE_H_
#define HUMANNOCHARGESTATE_H_

#include <iostream>

#include "HumanState.h"

using namespace std;

class HumanPlayer;

class HumanNoChargeState : public HumanState{
private:
	HumanPlayer *player;
public:
	HumanNoChargeState(HumanPlayer *pl) : player(pl){

	}

	virtual ~HumanNoChargeState(){}

	int handle();
};




#endif /* HUMANNOCHARGESTATE_H_ */
