/*
 * EventBase.h
 *	Event 的管理类
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "IOEvent.h"
#include "Event.h"
#include <deque>
using namespace std;
#ifndef EVENTBASE_H_
#define EVENTBASE_H_

class EventBase{
private:
	//TODO
	//管理IO事件
	//管理活跃事件
	deque<Event*>eventList;
	deque<Event*>activeEventList;
		int maxEvent;
	int nowEvent;

public:
	EventBase();
	~EventBase();
	int EventAdd(Event*);								//注册事件
	int EventDel(Event*);								//添加事件
	int BaseLoop();											//主循环
	void printall();


};



#endif /* EVENTBASE_H_ */
