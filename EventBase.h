/*
 * EventBase.h
 *	Event 的管理类
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "IOEvent.h"
#include "Event.h"
#include "EventOP.h"
#include <deque>
using namespace std;

//事件链表类型
#define EVLIST_TIMEOUT	0x01
#define EVLIST_INSERTED	0x02
#define EVLIST_SIGNAL		0x04
#define EVLIST_ACTIVE			0x08
#define EVLIST_INTERNAL	0x10
#define EVLIST_INIT	0x80

#ifndef EVENTBASE_H_
#define EVENTBASE_H_




class EventBase{
private:
	//TODO
	//管理IO事件
	//管理活跃事件
	deque<Event*>eventList;
	deque<Event*>activeEventList;

	//IO demultplexer ? back-end
	EventOP * evsel;

	int maxEventCount;
	int nowEventCount;
	int activeEventCount;

public:
	EventBase(int );
	~EventBase();
	int EventAdd(Event* ,struct timeval*);		//注册事件
	int EventDel(Event*);											//添加事件
	int BaseLoop(int );												//主循环
	void EventProcessActive();							//处理活跃事件
	void TimeoutProcess();									//处理超时事件
	int haveEvent();													//是否有注册事件
	void printall();
	void insertQueue(Event* , int);						//插入队列
	void removeQueue(Event* ,int);					//从队列中删除

};



#endif /* EVENTBASE_H_ */
