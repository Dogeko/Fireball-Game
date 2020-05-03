#include "BotThreeChargeState.h"
#include "BotPlayer.h"

int BotThreeChargeState::handle()
{
	cout << "Bot makes a move" << endl;
	
	player->set_state(player->get_no_charge_state());

	return 4;
}
