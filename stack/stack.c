#include "stack.h"
/*---------------------------------------------------------------------------
 * function name : status Push(sqStack *S,ElemType e)
 * describe      : 栈的顺序存储结构入栈操作	 	
 * parameter in  : S:栈结构体
				   e:向栈S的栈顶插入元素e
 * parameter out : 
                   函数的状态值
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
 * describe      : 栈的顺序存储结构出栈操作	 	
 * parameter in  : S:栈结构体
				   e:删除栈S的栈顶插入元素e
 * parameter out : 
                   函数的状态值
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
 * describe      : 栈的顺序存储结构入栈操作	 	
 * parameter in  : S:共享空间栈结构体
				   e:向共享空间栈S中插入元素e
                   stackNumber：栈号参数
 * parameter out : 
                   函数的状态值
-------------------------------------------------------------------------------*/ 
status DulPush(sqDoubleStack *S,SElemType e,int stackNumber)
{
	if (S->top1+1==S->top2)  //栈满溢出
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
 * describe      : 栈的顺序存储结构入栈操作	 	
 * parameter in  : *S:共享空间栈结构体
				   *e:将删除的元素赋值给指针*e
                   stackNumber：栈号参数
 * parameter out : 
                   函数的状态值
-------------------------------------------------------------------------------*/ 
status DulPop(sqDoubleStack *S,SElemType *e,int stackNumber)
{
    if (stackNumber==1)
    {
		if (S->top1==-1)  //栈1为空
		{
			return ERROR;
		}
        *e=S->data[S->top1--];
    }
	else if (stackNumber==2) //栈2为空
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
 * describe      : 栈的顺序存储结构入栈操作	 	
 * parameter in  : *S:共享空间栈结构体
				   *e:将删除的元素赋值给指针*e
                   stackNumber：栈号参数
 * parameter out : 
                   函数的状态值
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
 * describe      : 栈的顺序存储结构入栈操作	 	
 * parameter in  : *S:共享空间栈结构体
				   *e:将删除的元素赋值给指针*e
                   stackNumber：栈号参数
 * parameter out : 
                   函数的状态值
-------------------------------------------------------------------------------*/ 
status LinkStackPop(LinkStack *S,SElemType *e)
{
    LinkStackPtr p;
	/*if(StackEmpty(*S))  //若栈为空返回错误
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



