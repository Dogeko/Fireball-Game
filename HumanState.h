/*
 * HumanState.h
 *
 *  Created on: May 2, 2020
 *      Author: gabriele
 */

#ifndef HUMANSTATE_H_
#define HUMANSTATE_H_

class HumanState
{
public:
	HumanState() {}
	virtual ~HumanState() {}

	virtual int handle() = 0;
};

#endif /* HUMANSTATE_H_ */
