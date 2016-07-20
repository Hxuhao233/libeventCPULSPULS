/*
 * event.c
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "Event.h"

Event::Event(int type){
	eventType = type;
	flag = 0;
	res = 0;
	ncalls = 1;
}



int Event::getEventType() const {
	return eventType;
}

void Event::setEventType(int eventType) {
	this->eventType = eventType;
}

int Event::getFlag() const {
	return flag;
}

void Event::setFlag(int flag) {
	this->flag = flag;
}

int Event::getRes() const {
	return res;
}

void Event::setRes(int res) {
	this->res = res;
}

int Event::getNcalls() const{
	return ncalls;
}

void Event::setNcalls(int ncalls){
	this->ncalls = ncalls;
}
