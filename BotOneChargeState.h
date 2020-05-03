#ifndef BOTONECHARGESTATE_H
#define BOTONECHARGESTATE_H

#include <iostream>
#include "BotState.h"

using namespace std;

class BotPlayer;

class BotOneChargeState : public BotState
{
private:
	BotPlayer* player;
public:
	BotOneChargeState(BotPlayer* pl) : player(pl)
	{
	}

	virtual ~BotOneChargeState() {}

	int handle();
};

#endif