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

		cout<<"|1 = Charge|2 = Shield|3 = Fireball (LOCKED: Need 1 more charge)|4 = Karate Chop(LOCKED: Need 3 more charges)|"<<endl;
		cout<<"Make your move"<<endl;

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
			player->setCharges(1);
		}

		return move;
	}
