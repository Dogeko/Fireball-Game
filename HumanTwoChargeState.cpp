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

		cout<<"Make your move"<<endl;
    cout << "You have 2 charges" << endl;
		cout<<"1 = Charge\n2 = Shield\n3 = Fireball\n4 = Karate Chop(LOCKED: Need 1 more charge)"<<endl;
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
		}
		else if(move == 3){
			player->set_state(player->get_one_charge_state());
		}
		return move;
	}

