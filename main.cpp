/*
 * main.cpp
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */
#include "Event.h"
#include "IOEvent.h"
#include <iostream>
using namespace std;
int main(){
	IOEvent* ioe = new IOEvent(EV_READ,1);
	if(ioe->callback((void *)"1233"))
		cout << "succeed";
	return 0;
}



