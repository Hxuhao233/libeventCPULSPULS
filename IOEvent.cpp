/*
 * IOEvent.cpp
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "IOEvent.h"
#include "Event.h"
#include <iostream>
using namespace std;
IOEvent::IOEvent(int type,int fd):Event(type){

	this->fd = fd;

}

int IOEvent::callback(void *arg){
	switch(eventType){
	case EV_READ:
		//TODO
		//ReceiveData
		cout << "receive from " << fd << endl
					<< (char*)arg << endl;
		break;

	case EV_WRITE:
		//TODO
		//SendData
		cout << "send to " << fd << endl
					<< (char*)arg << endl;
	}

	return 1;
}

