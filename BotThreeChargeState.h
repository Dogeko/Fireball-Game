#ifndef BOTTHREECHARGESTATE_H
#define BOTTHREECHARGESTATE_H

#include <iostream>
#include "BotState.h"

using namespace std;

class BotPlayer;

class BotThreeChargeState : public BotState
{
private:
	BotPlayer* player;
public:
	BotThreeChargeState(BotPlayer* pl) : player(pl) {}

	virtual ~BotThreeChargeState() {}

	int handle();
};

#endif