/*
 * EventOP.cpp
 *
 *  Created on: 2016年7月12日
 *      Author: hxuhao
 */

#include <iostream>
#include "EventOP.h"

using namespace std;

EventOP::EventOP(char*n){
	name = n;
}

EventOP::~EventOP(){

}

int EventOP::add(Event *e){
	cout << "EventOP add"<< endl;
}

int EventOP::del(Event *e){
	cout << "EventOP del"<< endl;
}


int EventOP::dispatch(struct timeval* tv){

	return 0;
}
