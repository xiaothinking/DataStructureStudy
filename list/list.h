#ifndef __LIST_H__
#define __LIST_H__
#include <stdlib.h>

#define MAXSIZE 20
#define OK      1
#define ERROR   0
#define TRUE    1
#define FALSE   0

typedef int ElemType;
typedef int status;

typedef struct                  //线性表的顺序存储结构
{
	ElemType data[MAXSIZE];     //线性表的数据
	int length;                 //线性表的长度
}sqList;  

typedef struct Node             //线性表的单链表存储结构
{
	ElemType data;              //节点的数据域
	struct Node *next;          //节点的指针域
}Node;        
typedef struct Node *LinkList;  //定义单链表    

typedef struct                      
{
   ElemType data;               //数据域data用来存放数据元素 
   int cur;                     //数据域cur用来存放数据下标
}StaticLinkList[MAXSIZE];       //定义静态链表
     
typedef struct DulNode          //线性表的双向链表存储结构
{
	ElemType data;              //节点的数据域
    struct DulNode *prior;          //节点的直接后驱指针
	struct DulNode *next;           //节点的直接后驱指针
}DulNode;   
typedef struct DulNode *DulLinkList;  //定义双向链表     

status SequenceListGetElem(sqList L,int i,ElemType *e);
status SequenceListInsert(sqList *L,int i,ElemType e);
status SequenceListDelete(sqList *L,int i,ElemType *e);

status SingleLinkListGetElem(LinkList L,int i,ElemType *e);
status SingleLinkListInsert(LinkList *L,int i,ElemType e);
status SingleLinkListDelete(LinkList *L,int i,ElemType *e);

void   CreateListHead(LinkList *L,int n);
void   CreateListTail(LinkList *L,int n);
status ClearList(LinkList *L);

status InitList(StaticLinkList space);
int    ListLength(StaticLinkList L);
int    Malloc_SLL(StaticLinkList space);
int    Free_SLL(StaticLinkList space,int k);
status StaticLinkListInsert(StaticLinkList L,int i,ElemType e);
status StaticLinkListDelete(StaticLinkList L,int i);

status CircularLinkListGetElem(LinkList L,int i,ElemType *e);
status CircularLinkListInsert(LinkList *L,int i,ElemType e);
status CircularLinkListDelete(LinkList *L,int i,ElemType *e);

status DulLinkListGetElem(DulLinkList L,int i,ElemType *e);
status DulLinkListInsert(DulLinkList *L,int i,ElemType e);
status DulLinkListDelete(DulLinkList *L,int i,ElemType *e);

#endif

