/*
 * EventOP.cpp
 *
 *  Created on: 2016年7月12日
 *      Author: hxuhao
 */

#include "EventOP.h"
EventOP::EventOP(char*n){
	name = n;
}

EventOP::~EventOP(){

}

int EventOP::dispatch(struct timeval* tv){

	return 0;
}
