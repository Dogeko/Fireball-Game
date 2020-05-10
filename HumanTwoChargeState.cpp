/*
 * HumanOneChargeState.cpp
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#include "HumanPlayer.h"
#include "HumanTwoChargeState.h"


int HumanTwoChargeState::handle(){

		int move;

		cout<<"|1 = Charge|2 = Shield|3 = Fireball|4 = Karate Chop(LOCKED: Need 3 more charges)|"<<endl;
		cout<<"Make your move"<<endl;

		cin >> move;


		while(move > 3){

			if(move == 4){

				cout<<"NOT ENOUGH CHARGES FOR KARATE CHOP!"<<endl;
			}

			else if(move > 4){

				cout<<"INVALID INPUT!"<<endl;
			}

			cout<<"Make your move again"<<endl;
			cin >> move;
		}

		if(move == 1){
			player->set_state(player->get_three_charge_state());
			player->setCharges(3);
		}
		else if(move == 3){
			player->set_state(player->get_one_charge_state());
			player->setCharges(1);
		}
		return move;
	}

