#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#define BUFSIZE 255
#define KEY	1993822
typedef struct my_msg
{
		long int msg_type;
		char data[BUFSIZE];
}MSG;
//消息队列字符串发送
int main()
{
	int msgid;
	msgid=msgget((key_t)KEY,0666|IPC_CREAT);
	if(msgid==-1)
	{
            perror("msgget failed!\n");
            exit(-1);
	while(runflag)
        return 0;