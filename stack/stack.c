#include "stack.h"
/*---------------------------------------------------------------------------
 * function name : status Push(sqStack *S,ElemType e)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : S:ջ�ṹ��
				   e:��ջS��ջ������Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status Push(sqStack *S,SElemType e)
{
	if (S->top==MAXSIZE-1)
	{
		return ERROR;
	}
    S->top++;
	S->data[S->top]=e;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status Push(sqStack *S,ElemType e)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : S:ջ�ṹ��
				   e:ɾ��ջS��ջ������Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status Pop(sqStack *S,SElemType *e)
{
	if (S->top==-1)
	{
		return ERROR;
	}
	e=S->data[S->top];
    S->top--;
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : status DulPush(sqDoubleStack *S,SElemType e,int stackNumber)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : S:����ռ�ջ�ṹ��
				   e:����ռ�ջS�в���Ԫ��e
                   stackNumber��ջ�Ų���
 * parameter out : 
                   ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status DulPush(sqDoubleStack *S,SElemType e,int stackNumber)
{
	if (S->top1+1==S->top2)  //ջ�����
	{
		return ERROR;
	}
    if (stackNumber==1)
    {
          S->data[++S->top1]=e;
    }
	else if (stackNumber==2)
    {
		  S->data[--S->top2]=e;
    }
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : status DulPop(sqDoubleStack *S,SElemType *e,int stackNumber)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : *S:����ռ�ջ�ṹ��
				   *e:��ɾ����Ԫ�ظ�ֵ��ָ��*e
                   stackNumber��ջ�Ų���
 * parameter out : 
                   ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status DulPop(sqDoubleStack *S,SElemType *e,int stackNumber)
{
    if (stackNumber==1)
    {
		if (S->top1==-1)  //ջ1Ϊ��
		{
			return ERROR;
		}
        *e=S->data[S->top1--];
    }
	else if (stackNumber==2) //ջ2Ϊ��
    {
		if (S->top2==MAXSIZE)
		{
			return ERROR;
		}
		*e=S->data[S->top2++];
    }
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : status LinkStackPush(LinkStack *S,SElemType e)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : *S:����ռ�ջ�ṹ��
				   *e:��ɾ����Ԫ�ظ�ֵ��ָ��*e
                   stackNumber��ջ�Ų���
 * parameter out : 
                   ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status LinkStackPush(LinkStack *S,SElemType e)
{
    LinkStackPtr s=(LinkStackPtr)malloc(sizeof(StackNode));
    s->data=e;
	s->next=S->top;
	S->top=s;
	S->count++;
	return OK;
}

/*------------------------------------------------------------------------------
 * function name : status LinkStackPop(LinkStack *S,SElemType *e)
 * describe      : ջ��˳��洢�ṹ��ջ����	 	
 * parameter in  : *S:����ռ�ջ�ṹ��
				   *e:��ɾ����Ԫ�ظ�ֵ��ָ��*e
                   stackNumber��ջ�Ų���
 * parameter out : 
                   ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status LinkStackPop(LinkStack *S,SElemType *e)
{
    LinkStackPtr p;
	/*if(StackEmpty(*S))  //��ջΪ�շ��ش���
	{
		return ERROR;
	}*/
    *e=S->top->data;  
    p=S->top;
	S->top=S->top->next;
	free(p);
	S->count--;
	return OK;
}



