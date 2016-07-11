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

	EventBase base;
	IOEvent e1(EV_READ,1);
	IOEvent e2(EV_WRITE,2);

	base.EventAdd(&e1);
	base.EventAdd(&e2);
	base.printall();
	base.EventDel(&e2);
	base.printall();
//	delete e1;
	return 0;
}



