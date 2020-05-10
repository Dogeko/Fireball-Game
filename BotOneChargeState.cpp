#include "BotOneChargeState.h"
#include "BotPlayer.h"

int BotOneChargeState::handle()
{
	int move;
//  cout << "The Bot has 1 charge" << endl;
//	cout << "Bot makes a move" << endl;
	move = rand() % 3 + 1;
	
	if (move == 1)
	{
		player->set_state(player->get_two_charge_state());
		player->setCharges(2);
	}
	else if (move == 3) {
		player->set_state(player->get_no_charge_state());
		player->setCharges(0);
	}

	return move;
}
