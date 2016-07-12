/*
 * Event.h
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */

//事件类型
#define EV_READ			0x1
#define EV_WRITE			0x2
#define EV_TIMEOUT 	0x4

#ifndef EVENT_H_
#define EVENT_H_

class Event {
protected:
	int eventType;																	//关注的事件类型
	//int fd;																					//绑定的文件描述符
	//TODO
	//时间事件,信号事件

public:
	Event(int);
	virtual int callback(void*) = 0;						//回调函数
};



#endif /* EVENT_H_ */
