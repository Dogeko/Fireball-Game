/*
 * HumanOneChargeState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANONECHARGESTATE_H_
#define HUMANONECHARGESTATE_H_

#include <iostream>

#include "HumanState.h"

using namespace std;

class HumanPlayer;

class HumanOneChargeState : public HumanState
{
private:
	HumanPlayer *player;
public:
	HumanOneChargeState(HumanPlayer *pl) : player(pl) {}

	virtual ~HumanOneChargeState(){}

	int handle();

};




#endif /* HUMANONECHARGESTATE_H_ */
