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
	QElemType data[MAXSIZE];    //����������
	int front;                  //����ͷָ��
	int rear;                   //����βָ��
}sqQueue;                       //ѭ������

typedef struct QNode            //�����еĽڵ�ṹ
{
	QElemType data;
	struct QNode *next;     
}QNode,*QueuePtr;

typedef struct                  //���е�����ṹ
{
	QueuePtr front,rear;        //��ͷ��βָ��

}LinkQueue;

status InitQueue(sqQueue *Q);
int    QueueLength(sqQueue Q);
status EnQueue(sqQueue *Q,QElemType e);
status DeQueue(sqQueue *Q,QElemType *e);

status InitLinkQueue(LinkQueue *Q);
status EnLinkQueue(LinkQueue *Q,QElemType e);
status DeLinkQueue(LinkQueue *Q,QElemType *e);

#endif