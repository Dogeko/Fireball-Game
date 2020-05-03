/*
 * HumanPlayer.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANPLAYER_H_
#define HUMANPLAYER_H_

#include <iostream>

#include "Player.h"
#include "HumanState.h"
#include "HumanNoChargeState.h"
#include "HumanOneChargeState.h"
#include "HumanTwoChargeState.h"
#include "HumanThreeChargeState.h"

using namespace std;

class HumanPlayer : public Player
{
private:
	HumanState* no_charge_state;
	HumanState* one_charge_state;
	HumanState* two_charge_state;
	HumanState* three_charge_state;
public:
	HumanState *state;

	HumanPlayer()
	        : no_charge_state(new HumanNoChargeState(this)),
	          one_charge_state(new HumanOneChargeState(this)),
	          two_charge_state(new HumanTwoChargeState(this)),
	          three_charge_state(new HumanThreeChargeState(this))
	{
		state = no_charge_state;
	}
	
	void pick()
	{

		setChoice(state->handle());

	}
	
	virtual ~HumanPlayer()
	{
		delete no_charge_state;
		delete one_charge_state;
		delete two_charge_state;
		delete three_charge_state;

	}
	
	HumanState *get_state() const { return state; }

	void set_state(HumanState *st) { state = st; }

	HumanState *get_no_charge_state() const { return no_charge_state; }
	HumanState *get_one_charge_state() const { return one_charge_state; }
	HumanState *get_two_charge_state() const { return two_charge_state; }
	HumanState *get_three_charge_state() const { return three_charge_state; }

};


#endif /* HUMANPLAYER_H_ */
