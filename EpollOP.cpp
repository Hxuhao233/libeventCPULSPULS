/*
 * Epoll.cpp

 *
 *  Created on: 2016年7月14日
 *      Author: hxuhao
 */

#include <iostream>
#include "EpollOP.h"
#include "EventOP.h"

using namespace std;

EpollOP::EpollOP(char * n) : EventOP(n){
	cout << "EpollOP build" << endl;
}

int EpollOP::add(Event *e){
	cout << "EpollOP add"<< endl;
}

