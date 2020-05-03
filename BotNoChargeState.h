#ifndef BOTNOCHARGESTATE_H
#define BOTNOCHARGESTATE_H

#include <iostream>
#include"BotState.h"

using namespace std;

class BotPlayer;

class BotNoChargeState : public BotState
{
private:
	BotPlayer* player;
public:
	BotNoChargeState(BotPlayer* pl) : player(pl) {}

	virtual ~BotNoChargeState() {}

	int handle();
};

#endif