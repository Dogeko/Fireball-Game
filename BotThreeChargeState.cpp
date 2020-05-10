#include "BotThreeChargeState.h"
#include "BotPlayer.h"

int BotThreeChargeState::handle()
{
//  cout << "The Bot has 3 charges" << endl;
//	cout << "Bot makes a move" << endl;
	
	player->set_state(player->get_no_charge_state());
	player->setCharges(0);
	return 4;
}
