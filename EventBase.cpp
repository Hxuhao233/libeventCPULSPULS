/*
 * EventBase.cpp
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "EventBase.h"
#include <iostream>
using namespace std;

EventBase::EventBase(int max){
	nowEventCount = 0;
	maxEventCount = max;

	cout << "EventBase build succeed!" << endl;
}
EventBase::~EventBase(){
	eventList.clear();
	activeEventList.clear();
	nowEventCount--;

	cout << "EventBase destory succeed!" << endl;
}

int EventBase::EventAdd(Event* e){
	Event * e1 = e;
	eventList.push_front(e1);
	nowEventCount++;
	return 1;
}

int EventBase::EventDel(Event* e){

	deque<Event*>::iterator iter;
	for(iter = eventList.begin(); iter != eventList.end(); iter++){
		if(*iter==e){
			eventList.erase(iter);
		}
	}

	return 1;
}


int EventBase::BaseLoop(int flag){

	//TODO
	//时间校对反正一堆时间...
	//获得锁????????

	int done = 0;
	while(!done){
		//TODO
		//时间事件和信号事件
		//3个事件的整合
		//一堆东西好吗= =



		//如果没有注册事件就退出
		if(!haveEvent())
			return 1;

		// 调用系统I/O demultiplexer等待就绪I/O events
		// 在evsel->dispatch()中,会把就绪signal event、I/O event插入到激活链表中




	}

}

void EventBase::printall(){
	deque<Event*>::iterator iter;
	cout << "now event: " << nowEventCount;
	for(iter = eventList.begin(); iter != eventList.end(); iter++)
		(*iter)->callback((char*)"asd");

}

static int EventBase::haveEvent(){
	return (nowEventCount > 0);
}


