/*
 * BotState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef BOTSTATE_H_
#define BOTSTATE_H_

class BotState{

	BotState() {}
	virtual ~BotState() {}

	virtual int handle() = 0;
};

#endif /* BOTSTATE_H_ */
