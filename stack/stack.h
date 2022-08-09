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
	SElemType data[MAXSIZE];    //ջ��Ԫ��
    int top;                    //����ջ��ָ��
}sqStack;                       //����ջ�ṹ��

typedef struct
{
	SElemType data[MAXSIZE];     //ջ��Ԫ��
    int top1;                    //����ջ1��ջ��ָ��
	int top2;                    //����ջ2��ջ��ָ��
}sqDoubleStack;                  //���干��ռ��ջ�ṹ��

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