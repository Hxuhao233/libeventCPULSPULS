/*
 * EventOP.h
 *  包含实现EventBase后端处理的一些函数借口
 *  在Libevent中使用了函数指针,而在C++中可以用多态机制代替吧-0-
 *  Created on: 2016年7月12日
 *      Author: hxuhao
 */

#ifndef EVENTOP_H_
#define EVENTOP_H_

class EventOP{
public :
	EventOP();
	~EventOP();
	static void init();																		//初始化 构造函数?
	static int add();
	static int del();
	static int dispatch(struct timeval*);								//事件分发
	void dealoc();																				//释放资源 析构函数?


private :
	char* name;
};



#endif /* EVENTOP_H_ */
