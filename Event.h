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
	int ncalls;																				//需要回调的次数
	//TODO
	//时间事件,信号事件

public:
	Event(int);
	virtual int callback(void*) = 0;						//回调函数
	void setEventType(int );
	void setFlag(int );
	void setRes(int );
	void setNcalls(int );
	int getEventType() const;
	int getFlag() const;
	int getRes() const;
	int getNcalls() const;


};



#endif /* EVENT_H_ */
