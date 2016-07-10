/*
 * event.h
 *	 事件基类
 *  Created on: 2016年7月10日
 *      Author: hxuhao
 */

#ifndef EVENT_H_
#define EVENT_H_

//事件类型
#define EV_READ			0x1
#define EV_WRITE			0x2
#define EV_TIMEOUT 	0x4

class Event{
private:
	int eventType;																	//关注的事件类型
	//int fd;																					//绑定的文件描述符
	virtual void (*callback) (int , short , void* );		//回调函数
public:
	Event(int , int);

};




#endif /* EVENT_H_ */
