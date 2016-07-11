/*
 * IOEvent.h
 *
 *  Created on: 2016年7月10日
 *      Author: hxuhao
 */
#include "Event.h"
#ifndef IOEVENT_H_
#define IOEVENT_H_
class IOEvent : Event{
private:
	int fd;																//绑定的文件描述符
public:
	IOEvent(int , int );
	int callback(void*) ;					//回调函数
};



#endif /* IOEVENT_H_ */
