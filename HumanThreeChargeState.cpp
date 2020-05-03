/*
 * HumanThreeChargeState.cpp
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#include "HumanPlayer.h"
#include "HumanThreeChargeState.h"

int HumanThreeChargeState::handle(){

		int move;

		cout<<"Make your move"<<endl;
		cout<<"1 = Charge 2 = Shield 3 = Fireball 4 = ORA ORA ORA"<<endl;
		cin >> move;


		if(move == 3){
			player->set_state(player->get_two_charge_state());
		}
		else if(move == 4){
			player->set_state(player->get_no_charge_state());
		}
		return move;
	}
