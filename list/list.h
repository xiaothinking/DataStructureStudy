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

typedef struct                  //���Ա��˳��洢�ṹ
{
	ElemType data[MAXSIZE];     //���Ա������
	int length;                 //���Ա�ĳ���
}sqList;  

typedef struct Node             //���Ա�ĵ�����洢�ṹ
{
	ElemType data;              //�ڵ��������
	struct Node *next;          //�ڵ��ָ����
}Node;        
typedef struct Node *LinkList;  //���嵥����    

typedef struct                      
{
   ElemType data;               //������data�����������Ԫ�� 
   int cur;                     //������cur������������±�
}StaticLinkList[MAXSIZE];       //���徲̬����
     
typedef struct DulNode          //���Ա��˫������洢�ṹ
{
	ElemType data;              //�ڵ��������
    struct DulNode *prior;          //�ڵ��ֱ�Ӻ���ָ��
	struct DulNode *next;           //�ڵ��ֱ�Ӻ���ָ��
}DulNode;   
typedef struct DulNode *DulLinkList;  //����˫������     

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

