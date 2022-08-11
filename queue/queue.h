#ifndef _QUEUE_H__
#define _QUEUE_H__

#include <stdlib.h>

#define MAXSIZE 5

#define OK      1
#define ERROR   0
#define TRUE    1
#define FALSE   0

int OVERFLOW=0;

typedef int status; 
typedef int QElemType;

typedef struct
{
	QElemType data[MAXSIZE];    //队列数据域
	int front;                  //队列头指针
	int rear;                   //队列尾指针
}sqQueue;                       //循环队列

typedef struct QNode            //链队列的节点结构
{
	QElemType data;
	struct QNode *next;     
}QNode,*QueuePtr;

typedef struct                  //队列的链表结构
{
	QueuePtr front,rear;        //队头队尾指针

}LinkQueue;

status InitQueue(sqQueue *Q);
int    QueueLength(sqQueue Q);
status EnQueue(sqQueue *Q,QElemType e);
status DeQueue(sqQueue *Q,QElemType *e);

status InitLinkQueue(LinkQueue *Q);
status EnLinkQueue(LinkQueue *Q,QElemType e);
status DeLinkQueue(LinkQueue *Q,QElemType *e);

#endif