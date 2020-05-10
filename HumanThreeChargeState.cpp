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

		cout<<"|1 = Charge|2 = Shield|3 = Fireball|4 = Karate Chop|"<<endl;
		cout<<"Make your move"<<endl;


		cin >> move;

		while(move > 4){

			cout<<"INVALID INPUT!"<<endl;

			cout<<"Make your move again"<<endl;
			cin >> move;
		}

		if(move == 3){
			player->set_state(player->get_two_charge_state());
			player->setCharges(2);
		}
		else if(move == 4){
			player->set_state(player->get_no_charge_state());
			player->setCharges(0);
		}
		return move;
	}
