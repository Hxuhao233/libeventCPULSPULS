/*
 * Event.h
 *
 *  Created on: 2016年7月11日
 *      Author: hxuhao
 */

//事件类型
#define EV_READ			0x01
#define EV_WRITE			0x02
#define EV_TIMEOUT 	0x04



#ifndef EVENT_H_
#define EVENT_H_

class Event {
protected:
	int eventType;																	//关注的事件类型
	int flag;
	int res;
	//TODO
	//时间事件,信号事件

public:
	Event(int);
	virtual int callback(void*) = 0;						//回调函数
	void setEventType(int );
	void setFlag(int );
	void setRes(int );
	int getEventType() const;
	int getFlag() const;
	int getRes() const;

};



#endif /* EVENT_H_ */
