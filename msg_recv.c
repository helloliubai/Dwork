#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#define BUFSIZE 255
#define KEY	1993822
{
		long int msg_type;
		char data[BUFSIZE];
}MSG;
//消息队列字符串发送