/*
 * HumanNoChargeState.cpp
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */


#include "HumanNoChargeState.h"
#include "HumanPlayer.h"

int HumanNoChargeState::handle(){

		int move;

		cout<<"Make your move"<<endl;
		cout<<"1  = Charge 2 = Shield 3 = Fireball 4 = ORA ORA ORA"<<endl;
		cin >> move;


		if(move == 1){
			player->set_state(player->get_one_charge_state());
		}

		return move;
	}
