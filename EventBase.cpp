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
	//在编译的时候选择后端处理机制 可以是epoll也可以是别的
	evsel = new EpollOP();
	nowEventCount = 0;
	activeEventCount = 0;
	maxEventCount = max;

	cout << "EventBase build succeed!" << endl;
}
EventBase::~EventBase(){
	eventList.clear();
	activeEventList.clear();
	if(!evsel){
		delete evsel;
	}
	evsel = NULL;

	cout << "EventBase destory succeed!" << endl;
}

int EventBase::EventAdd(Event* e){

	Event * e1 = e;
	eventList.push_front(e1);
	nowEventCount ++;
	return 1;

}

int EventBase::EventDel(Event* e){

	deque<Event*>::iterator iter;
	for(iter = eventList.begin(); iter != eventList.end(); iter++){
		if(*iter==e){
			eventList.erase(iter);
			nowEventCount --;
		}
	}

	return 1;
}


int EventBase::BaseLoop(int flag){

	int res = 0;
	//时间对于后面的分发有很大影响
	struct timeval* tv_p;

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

		//调用系统I/O demultiplexer等待就绪I/O events
		//在evsel->dispatch()中,会把就绪signal event、I/O event插入到激活链表中
		//dispatch()这里会调用系统提供的多路复用处理机制,libevent为这些机制提供了机制.
		res = evsel->dispatch(tv_p);
		if(res = -1)
			return -1;
		//调用event_process_active()处理激活链表中的就绪event,调用其回调函数执行事件处理
		//该函数会寻找最高优先级(priority值越小优先级越高)的激活事件链表,
		//然后处理链表中的所有就绪事件;
		//因此低优先级的就绪事件可能得不到及时处理;
		//先不管优先级
		EventProcessActive();


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


