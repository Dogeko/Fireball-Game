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
		cout<<"1 = Charge\n2 = Shield\n3 = Fireball (LOCKED: Need 1 more charge)\n4 = Karate Chop(LOCKED: Need 3 more charges)"<<endl;

		cin >> move;

		while(move > 2){

			if(move == 3){

				cout<<"NOT ENOUGH CHARGES FOR FIREBALL!"<<endl;
			}
			else if(move == 4){

				cout<<"NOT ENOUGH CHARGES FOR KARATE CHOP!"<<endl;
			}
			else if(move > 4){

				cout<<"INVALID INPUT!"<<endl;
			}

			cout<<"Make your move again"<<endl;
			cin >> move;
		}

		if(move == 1){
			player->set_state(player->get_one_charge_state());
		}

		return move;
	}
