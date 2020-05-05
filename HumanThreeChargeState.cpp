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
    cout << "You have 3 charges" << endl;
		cout<<"1 = Charge\n2 = Shield\n3 = Fireball\n4 = Karate Chop"<<endl;
		cin >> move;

		while(move > 4){

			cout<<"INVALID INPUT!"<<endl;

			cout<<"Make your move again"<<endl;
			cin >> move;
		}

		if(move == 3){
			player->set_state(player->get_two_charge_state());
		}
		else if(move == 4){
			player->set_state(player->get_no_charge_state());
		}
		return move;
	}
