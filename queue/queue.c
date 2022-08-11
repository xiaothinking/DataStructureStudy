#include "queue.h" 
/*------------------------------------------------------------------------------
 * function name : status InitQueue(sqQueue *Q)
 * describe      : 循环队列的初始化	 	
 * parameter in  : *Q:循环队列
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status InitQueue(sqQueue *Q)
{
	Q->front=0;
	Q->rear=0;
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : int QueueLength(sqQueue Q)
 * describe      : 循环队列的长度	
 * parameter in  : *Q:循环队列
 * parameter out :  Q的元素个数，也就是队列的当前长度
-------------------------------------------------------------------------------*/ 
int QueueLength(sqQueue Q)
{
   return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

/*------------------------------------------------------------------------------
 * function name : status EnQueue(sqQueue *Q,QElemType e)
 * describe      : 循环队列的入队操作	
 * parameter in  : *Q:循环队列
                    e:需要入队的元素
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status EnQueue(sqQueue *Q,QElemType e)
{
   if ((Q->rear+1)%MAXSIZE==Q->front)
   {
	   return ERROR;
   }
   Q->data[Q->rear]=e;
   Q->rear=(Q->rear+1)%MAXSIZE;
   return OK;
}

/*------------------------------------------------------------------------------
 * function name : status DeQueue(sqQueue *Q,QElemType *e)
 * describe      : 循环队列的出队操作	
 * parameter in  : *Q:循环队列
                   e:需要入队的元素
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status DeQueue(sqQueue *Q,QElemType *e)
{
   if (Q->rear==Q->front)
   {
	   return ERROR;
   }
   *e=Q->data[Q->front];
   Q->front=(Q->front+1)%MAXSIZE;
   return OK;
}

/*------------------------------------------------------------------------------
 * function name : status InitLinkQueue(LinkQueue *Q)
 * describe      : 循环队列的初始化	 	
 * parameter in  : *Q:循环队列
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status InitLinkQueue(LinkQueue *Q)
{
    Q->front=(QueuePtr)malloc(sizeof(QNode));
	Q->rear=(QueuePtr)malloc(sizeof(QNode));
	Q->front=Q->rear;
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : status EnLinkQueue(LinkQueue *Q,QElemType e)
 * describe      : 链队列的入队操作	
 * parameter in  : *Q:循环队列
                   e:需要入队的元素
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status EnLinkQueue(LinkQueue *Q,QElemType e)
{
   QueuePtr s=(QueuePtr)malloc(sizeof(QNode));
   if (!s)                   //分配内存失败退出程序
   {
	   exit(OVERFLOW);
   }
   s->data=e;
   s->next=NULL;
   Q->rear->next=s;
   Q->rear=s;
   return OK;
}

/*------------------------------------------------------------------------------
 * function name : status DeQueue(sqQueue *Q,QElemType *e)
 * describe      : 循环队列的出队操作	
 * parameter in  : *Q:循环队列
                   e:需要入队的元素
 * parameter out : 函数的状态值
-------------------------------------------------------------------------------*/ 
status DeLinkQueue(LinkQueue *Q,QElemType *e)
{
	QueuePtr p;
	if (Q->front=Q->rear)   //空队列
	{
		return ERROR;
	}
	p=Q->front->next;
	*e=p->data;
	Q->front->next=p->next;
	if (Q->rear==p)
	{
		Q->rear=Q->front;
	}
	free(p);
	return OK;
}



