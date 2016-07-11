/*
 * EventBase.cpp
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "EventBase.h"
#include <iostream>
using namespace std;

EventBase::EventBase(){
	cout << "EventBase build succeed!" << endl;
}
EventBase::~EventBase(){
	eventList.clear();
	cout << "EventBase destory succeed!" << endl;
}

int EventBase::EventAdd(Event* e){
	Event * e1 = e;
	eventList.push_front(e1);
}

int EventBase::EventDel(Event* e){

	deque<Event*>::iterator iter;
	for(iter = eventList.begin(); iter != eventList.end(); iter++){
		if(*iter==e){
			eventList.erase(iter);
		}
	}

}
void EventBase::printall(){
	deque<Event*>::iterator iter;
	for(iter = eventList.begin(); iter != eventList.end(); iter++)
		(*iter)->callback((char*)"asd");

}
