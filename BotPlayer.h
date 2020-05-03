/*
 * BotPlayer.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef BOTPLAYER_H_
#define BOTPLAYER_H_

#include <iostream>

#include "Player.h"
#include "BotState.h"
#include "BotNoChargeState.h"
#include "BotOneChargeState.h"
#include "BotTwoChargeState.h"
#include "BotThreeChargeState.h"

using namespace std;

class BotPlayer : public Player
{
private:
    BotState* no_charge_state;
    BotState* one_charge_state;
    BotState* two_charge_state;
    BotState* three_charge_state;
public:
    BotState* state;

    BotPlayer()
        : no_charge_state(new BotNoChargeState(this)),
        one_charge_state(new BotOneChargeState(this)),
        two_charge_state(new BotTwoChargeState(this)),
        three_charge_state(new BotThreeChargeState(this))
    {
        state = no_charge_state;
    }

    void pick()
    {
        setChoice(state->handle());
    }

    virtual ~BotPlayer()
    {
        delete no_charge_state;
        delete one_charge_state;
        delete two_charge_state;
        delete three_charge_state;
    }

    BotState* get_state() const { return state; }

    void set_state(BotState* st) { state = st; }

    BotState* get_no_charge_state() const { return no_charge_state; }
    BotState* get_one_charge_state() const { return one_charge_state; }
    BotState* get_two_charge_state() const { return two_charge_state; }
    BotState* get_three_charge_state() const { return three_charge_state; }
};

#endif /* BOTPLAYER_H_ */
