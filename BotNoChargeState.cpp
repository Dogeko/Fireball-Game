#include "BotNoChargeState.h"
#include "BotPlayer.h"

int BotNoChargeState::handle()
{
	int move;

//  cout << "The Bot has no charges" << endl;
//	cout << "Bot makes a move" << endl;
  
	move = 1;
	
	if (move == 1)
	{
		player->set_state(player->get_one_charge_state());
		player->setCharges(1);
	}
	
	return move;
}
