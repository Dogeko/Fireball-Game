#include "BotTwoChargeState.h"
#include "BotPlayer.h"

int BotTwoChargeState::handle()
{
	int move;
//  cout << "The Bot has 2 charges" << endl;
//	cout << "Bot makes a move" << endl;
	move = rand() % 3 + 1;


	if (move == 1) {
		player->set_state(player->get_three_charge_state());
		player->setCharges(3);
	}
	else if (move == 3) {
		player->set_state(player->get_one_charge_state());
		player->setCharges(1);
	}

	return move;
}
