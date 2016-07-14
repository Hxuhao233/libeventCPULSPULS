/*
 * EpollOP.h
 *
 *  Created on: 2016年7月12日
 *      Author: hxuhao
 */
#include "EventOP.h"
#ifndef EPOLLOP_H_
#define EPOLLOP_H_

class EpollOP : public EventOP{

public:
	EpollOP(char *name);
	~EpollOP();

};



#endif /* EPOLLOP_H_ */
