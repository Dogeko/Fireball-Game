#ifndef BOTTWOCHARGESTATE_H
#define BOTTWOCHARGESTATE_H

#include <iostream>
#include "BotState.h"

using namespace std;

class BotPlayer;

class BotTwoChargeState : public BotState
{
private:
	BotPlayer* player;
public:
	BotTwoChargeState(BotPlayer* pl) : player(pl) {}

	virtual ~BotTwoChargeState() {}
	int handle();
};

#endif
