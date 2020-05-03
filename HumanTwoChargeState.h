/*
 * HumanTwoChargeState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANTWOCHARGESTATE_H_
#define HUMANTWOCHARGESTATE_H_

#include <iostream>

#include "HumanState.h"

using namespace std;

class HumanPlayer;

class HumanTwoChargeState : public HumanState
{
private:
	HumanPlayer *player;
public:
	HumanTwoChargeState(HumanPlayer *pl) : player(pl){}

	virtual ~HumanTwoChargeState(){}

	int handle();

};




#endif /* HUMANTWOCHARGESTATE_H_ */
