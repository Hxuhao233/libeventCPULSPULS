/*
 * IOEvent.h
 *
 *  Created on: 2016年7月10日
 *      Author: hxuhao
 */

#ifndef IOEVENT_H_
#define IOEVENT_H_
class IOEVENT : Event{
private:
	int fd;										//绑定的文件描述符
public:
	IOEVENT(int , int ,void(* c) (int,int,void));
};



#endif /* IOEVENT_H_ */
