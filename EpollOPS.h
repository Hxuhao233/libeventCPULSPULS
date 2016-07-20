/*
 * EpollOP.h
 *
 *  Created on: 2016年7月12日
 *      Author: hxuhao
 */
#include "EventOP.h"
#ifndef EPOLLOP_H_
#define EPOLLOP_H_

class EpollOP : public EventOP{
private:

public:
	EpollOP(char *name);
	~EpollOP();
	static void init();																		//初始化 构造函数?
	static int add(Event* e);
	static int del(Event* e);
	static int dispatch(struct timeval*);								//事件分发
	void dealoc();																			//释放资源 析构函数?

};



#endif /* EPOLLOP_H_ */
