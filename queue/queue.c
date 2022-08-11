#include "queue.h" 
/*------------------------------------------------------------------------------
 * function name : status InitQueue(sqQueue *Q)
 * describe      : ѭ�����еĳ�ʼ��	 	
 * parameter in  : *Q:ѭ������
 * parameter out : ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status InitQueue(sqQueue *Q)
{
	Q->front=0;
	Q->rear=0;
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : int QueueLength(sqQueue Q)
 * describe      : ѭ�����еĳ���	
 * parameter in  : *Q:ѭ������
 * parameter out :  Q��Ԫ�ظ�����Ҳ���Ƕ��еĵ�ǰ����
-------------------------------------------------------------------------------*/ 
int QueueLength(sqQueue Q)
{
   return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

/*------------------------------------------------------------------------------
 * function name : status EnQueue(sqQueue *Q,QElemType e)
 * describe      : ѭ�����е���Ӳ���	
 * parameter in  : *Q:ѭ������
                    e:��Ҫ��ӵ�Ԫ��
 * parameter out : ������״ֵ̬
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
 * describe      : ѭ�����еĳ��Ӳ���	
 * parameter in  : *Q:ѭ������
                   e:��Ҫ��ӵ�Ԫ��
 * parameter out : ������״ֵ̬
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
 * describe      : ѭ�����еĳ�ʼ��	 	
 * parameter in  : *Q:ѭ������
 * parameter out : ������״ֵ̬
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
 * describe      : �����е���Ӳ���	
 * parameter in  : *Q:ѭ������
                   e:��Ҫ��ӵ�Ԫ��
 * parameter out : ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status EnLinkQueue(LinkQueue *Q,QElemType e)
{
   QueuePtr s=(QueuePtr)malloc(sizeof(QNode));
   if (!s)                   //�����ڴ�ʧ���˳�����
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
 * describe      : ѭ�����еĳ��Ӳ���	
 * parameter in  : *Q:ѭ������
                   e:��Ҫ��ӵ�Ԫ��
 * parameter out : ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status DeLinkQueue(LinkQueue *Q,QElemType *e)
{
	QueuePtr p;
	if (Q->front=Q->rear)   //�ն���
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



