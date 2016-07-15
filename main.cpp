/*
 * main.cpp
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "Event.h"
#include "IOEvent.h"
#include "EventBase.h"
#include <iostream>
using namespace std;
int main(){

	EventBase base(10);
	IOEvent e1(EV_READ,1);
	IOEvent e2(EV_WRITE,2);
	e1.setFlag(EVLIST_INSERTED);
	e2.setFlag(EVLIST_ACTIVE);
	base.EventAdd(&e1,NULL);
	base.EventAdd(&e2,NULL);
	base.printall();
	base.BaseLoop(10);
	return 0;
}



