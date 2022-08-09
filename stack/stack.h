#ifndef __STACK_H__
#define __STACK_H__
#include <stdlib.h>
#define MAXSIZE 20
#define OK      1
#define ERROR   0
#define TRUE    1
#define FALSE   0

typedef int status;
typedef int SElemType;

typedef struct
{
	SElemType data[MAXSIZE];    //栈中元素
    int top;                    //用于栈顶指针
}sqStack;                       //定义栈结构体

typedef struct
{
	SElemType data[MAXSIZE];     //栈中元素
    int top1;                    //用于栈1的栈顶指针
	int top2;                    //用于栈2的栈顶指针
}sqDoubleStack;                  //定义共享空间的栈结构体

typedef struct StackNode
{
	SElemType data;
	struct StackNode *next;

}StackNode,*LinkStackPtr;

typedef struct LinkStack
{
  LinkStackPtr top;
  int count;
}LinkStack;

status Push(sqStack *S,SElemType e);
status Pop(sqStack *S,SElemType *e);

status DulPush(sqDoubleStack *S,SElemType e,int stackNumber);
status DulPop(sqDoubleStack *S,SElemType *e,int stackNumber);

status LinkStackPush(LinkStack *S,SElemType e);
status LinkStackPop(LinkStack *S,SElemType *e);

#endif