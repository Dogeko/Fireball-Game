#include "BotTwoChargeState.h"
#include "BotPlayer.h"

int BotTwoChargeState::handle()
{
	int move;

	cout << "Bot makes a move" << endl;
	move = rand() % 3 + 1;


	if (move == 1) {
		player->set_state(player->get_three_charge_state());
	}
	else if (move == 3) {
		player->set_state(player->get_one_charge_state());
	}

	return move;
}
