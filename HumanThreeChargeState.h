/*
 * HumanThreeChargeState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANTHREECHARGESTATE_H_
#define HUMANTHREECHARGESTATE_H_

#include <iostream>

#include "HumanState.h"

using namespace std;

class HumanPlayer;

class HumanThreeChargeState : public HumanState
{
private:
	HumanPlayer *player;
public:
	HumanThreeChargeState(HumanPlayer *pl) : player(pl){}

	virtual ~HumanThreeChargeState(){}

	int handle();

};



#endif /* HUMANTHREECHARGESTATE_H_ */
