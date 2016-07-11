/*
 * EventBase.h
 *	Event 的管理类
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "IOEvent.h"
#include "Event.h"
#ifndef EVENTBASE_H_
#define EVENTBASE_H_

class EventBase{
private:
	//TODO
	//管理IO事件
	//管理活跃事件

	int maxEvent;
	int nowEvent;

public:
	EventBase(int );
	EventAdd(int,int);							//注册事件
	EventDel(Event*);								//添加事件
	BaseLoop();											//主循环


};



#endif /* EVENTBASE_H_ */
