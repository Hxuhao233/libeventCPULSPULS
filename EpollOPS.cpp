/*
 * Epoll.cpp

 *
 *  Created on: 2016年7月14日
 *      Author: hxuhao
 */

#include "EpollOPS.h"

#include <iostream>
#include "EventOP.h"

#include <stdint.h>
#include <sys/types.h>
#include <sys/resource.h>
#ifdef _EVENT_HAVE_SYS_TIME_H
#include <sys/time.h>
#endif
#include <sys/queue.h>
#include <sys/epoll.h>
#include <signal.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <x86_64-linux-gnu/bits/fcntl-linux.h>

#define INITIAL_NEVENT 32
#define MAX_NEVENT 4096

using namespace std;

EpollOP::EpollOP(char * n) : EventOP(n){
	cout << "EpollOP build" << endl;
	int epfd;
	if(epfd = epoll_create(32000) == -1){
		if(errno != ENOSYS)
			cerr << "epoll_create\n";
		exit(-1);
	}
	//设置epfd再子进程exec后自动关闭
	int flags = fcntl(epfd, F_GETFD);
	flags |= FD_CLOEXEC;
	fcntl(epfd, F_SETFD, flags);



}

int EpollOP::add(Event *e){
	cout << "EpollOP add"<< endl;
}

int EpollOP::del(Event *e){
	cout << "EpollOP del"<< endl;
}
