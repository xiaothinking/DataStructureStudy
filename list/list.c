#include "list.h"

/*---------------------------------------------------------------------------
 * function name :status SequenceGetElem(sqList L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ��ȡ���Ա��еĵڼ���Ԫ��
				   *e:�����Ա�L�е�i��Ԫ�ص�ֵ��ֵ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SequenceListGetElem(sqList L,int i,ElemType *e)
{
	if (L.length==0 || i<1 || i>L.length)
	{
		return ERROR;
	}
    *e=L.data[i-1];
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SequenceListInsert(sqList *L,int i,ElemType e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ز���	 	
 * parameter in  : L:���Ա�ṹ��
                   i:�����Ա��еĵ�i��λ�ò���Ԫ��
				   e:�����Ա�L�еĵ�i��λ�ò���Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SequenceListInsert(sqList *L,int i,ElemType e)
{
	int k;
	if(L->length>=MAXSIZE)
	{
        return ERROR;
	}
	if(i<1 || i>L->length+1)
	{
        return ERROR;
	}
	if (i<=L->length)
	{
		for(k=L->length-1;k>=i-1;k--)
		{
			L->data[k+1]=L->data[k];
		}
	}
	L->data[i-1]=e;
	L->length++;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SequenceListDelete(sqList *L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ��ɾ��	 	
 * parameter in  : L:���Ա�ṹ��
                   i:�����Ա��еĵ�i��λ�ò���Ԫ��
				   e:�����Ա�L�еĵ�i��λ�ò���Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SequenceListDelete(sqList *L,int i,ElemType *e)
{
	int k;
	if(L->length==0)
	{
        return ERROR;
	}
	if(i<1 || i>L->length)
	{
        return ERROR;
	}
	*e=L->data[i-1];
	if (i<L->length)
	{
		for(k=i;k<L->length;k++)
		{
			L->data[k-1]=L->data[k];
		}
	}
	L->length--;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListGetElem(LinkList L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ��ȡ���Ա��еĵڼ���Ԫ��
				   *e:�����Ա�L�е�i��Ԫ�ص�ֵ��ֵ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SingleLinkListGetElem(LinkList L,int i,ElemType *e)
{	

	int j;
	LinkList p;
	p=L->next;
	j=1;
	while( p && j<i)
	{
		p=p->next;
		++j;
	}
	if(!p || j>i)
	{
		return ERROR;
	}
	*e=p->data;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListInsert(LinkList *L,int i,ElemType e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ���뵽���Ա��еĵ�i��λ��
				   *e:�����Ա�L�е�i��λ�õ�ֵ����Ԫ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SingleLinkListInsert(LinkList *L,int i,ElemType e)
{
	int j;
	LinkList p,s;
    p=*L;
	j=1;
	while(p&&j<i)
	{
		p=p->next;
		++j;
	}
	if(!p || j>i)
	{
		return ERROR;
	}
    s=(LinkList) malloc(sizeof(Node));   //�����ڴ�
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListDelete(LinkList *L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ��ɾ��	 	
 * parameter in  : L:���Ա�ṹ��
                   i:�����Ա��еĵ�i��λ�ò���Ԫ��
				   e:�����Ա�L�еĵ�i��λ�ò���Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status SingleLinkListDelete(LinkList *L,int i,ElemType *e)
{
	int j;
	LinkList p,q; 
	p=*L;
	j=1;
	while((p->next)&&j<i)
	{
		p=p->next;
		++j;
	}
	if(!(p->next)||j>i)
	{
		return ERROR;
	}
	q=p->next;
	p->next=q->next;
	*e=q->data;
	free(q);        //�ͷ��ڴ�
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : void CreateListHead(LinkList *L,int n)
 * describe      : ���������������ͷ�巨	
 * parameter in  : L:���Ա�ṹ��
                   n:������ɵ�Ԫ�صĸ���
 * parameter out : void          
---------------------------------------------------------------------------*/ 
void CreateListHead(LinkList *L,int n)
{
	LinkList p;
	int i;
	srand(time(0));
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
	for (i=0;i<n;i++)
	{
		p=(LinkList)malloc(sizeof(Node));
		p->data=rand()%100+1;
		p->next=(*L)->next;
		(*L)->next=p;
	}
}

/*---------------------------------------------------------------------------
 * function name : void CreateListHead(LinkList *L,int n)
 * describe      : ���������������β�巨	
 * parameter in  : L:���Ա�ṹ��
                   n:������ɵ�Ԫ�صĸ���
 * parameter out : void          
---------------------------------------------------------------------------*/ 
void CreateListTail(LinkList *L,int n)
{
	LinkList p,r;
	int i;
	srand(time(0));
	*L=(LinkList)malloc(sizeof(Node));
	r=*L;
	for (i=0;i<n;i++)
	{
		p=(Node *)malloc(sizeof(Node));
		p->data=rand()%100+1;
		r->next=p;
		r=p;
	}
	r->next=NULL;
}

/*---------------------------------------------------------------------------
 * function name : status CrearList(LinkList *L)
 * describe      : �������������ɾ��	
 * parameter in  : L:������                 
 * parameter out : void          
---------------------------------------------------------------------------*/ 
status ClearList(LinkList *L)
{
	LinkList p,q;
	p=(*L)->next;
	while (p)
	{
		q=p->next;
		free(p);
		p=q;
	}
	(*L)->next=NULL;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status InitList(StaticLinkList space)
 * describe      : ��̬����ĳ�ʼ��	
 * parameter in  : space:��̬����                 
 * parameter out : void          
---------------------------------------------------------------------------*/ 
status InitList(StaticLinkList space)
{
	int i;
	for(i=0;i<MAXSIZE-1;i++)
	{
		space[i].cur=i+1;
        space[MAXSIZE-1].cur=0;
	}
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : int ListLength(StaticLinkList L)
 * describe      : ��̬����ĳ�ʼ��	
 * parameter in  : L:��̬����                 
 * parameter out : j:�����Ԫ�ظ���          
---------------------------------------------------------------------------*/ 
int ListLength(StaticLinkList L)
{
	int j=0;
	int i=L[MAXSIZE-1].cur;
	while(i)
	{
		i=L[i].cur;
		++j;
	}	
	return j;
}

/*---------------------------------------------------------------------------
 * function name : int Malloc_SLL(StaticLinkList space)
 * describe      : ��̬������ڴ����	
 * parameter in  : space:��̬����                 
 * parameter out : i:���ط���ڵ���±�          
---------------------------------------------------------------------------*/ 
int Malloc_SLL(StaticLinkList space)
{
	int i;
    i=space[0].cur;
	if(space[0].cur)
	{
		space[0].cur=space[i].cur;
	}
	return i;
}

/*---------------------------------------------------------------------------
 * function name : int Malloc_SLL(StaticLinkList space)
 * describe      : ��̬������ڴ��ͷ�	
 * parameter in  : space:��̬����  
                   k:��Ҫ�ͷŵ��ĵ�i��Ԫ�� 
 * parameter out : void        
---------------------------------------------------------------------------*/ 
int Free_SLL(StaticLinkList space,int k)
{
	space[k].cur=space[0].cur;
	space[0].cur=k;
}


/*---------------------------------------------------------------------------
 * function name : int Malloc_SLL(StaticLinkList space)
 * describe      : ��̬�����Ԫ�ز���	
 * parameter in  : space:��̬����                 
 * parameter out : i:���ط���ڵ���±�          
---------------------------------------------------------------------------*/ 
status StaticLinkListInsert(StaticLinkList L,int i,ElemType e)
{
	int j,k,l;
	k=MAXSIZE-1;
	if(i<1||i>ListLength(L))
	{
		return ERROR;
	}
	j=Malloc_SLL(L);
	if(j)
	{
		L[j].data=e;
		for(l=1;l<=i-1;l++)
		{
			k=L[k].cur;
		}
		L[j].cur=L[k].cur;
		L[k].cur=j;
		return OK;
	}
	return ERROR;
}

/*---------------------------------------------------------------------------
 * function name : status StaticLinkListDelete(StaticLinkList L,int i)
 * describe      : ��̬�����Ԫ��ɾ��	
 * parameter in  : space:��̬����                 
 * parameter out : i:���ط���ڵ���±�          
---------------------------------------------------------------------------*/ 
status StaticLinkListDelete(StaticLinkList L,int i)
{
	int j,k;
	k=MAXSIZE-1;
	if(i<1||i>ListLength(L))
	{
		return ERROR;
	}
	
	for(j=1;j<=i-1;j++)
	{
		k=L[k].cur;
	}
	j=L[k].cur;
	L[k].cur=L[j].cur;
	Free_SLL(L,j);	
	return OK;
	
	
}

/*-------------------------------------------------------------------------------
 * function name : status CircularLinkListGetElem(LinkList L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ��ȡ���Ա��еĵڼ���Ԫ��
				   *e:�����Ա�L�е�i��Ԫ�ص�ֵ��ֵ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
-------------------------------------------------------------------------------*/ 
status CircularLinkListGetElem(LinkList L,int i,ElemType *e)
{	

	int j=1;
	LinkList p;
	p=L->next;
	j=1;
	while( (p!=L) && j<i)
	{
		p=p->next;
		++j;
	}
	if((p==L) || j>i)
	{
		return ERROR;
	}
	*e=p->data;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status CircularLinkListInsert(LinkList *L,int i,ElemType e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ���뵽���Ա��еĵ�i��λ��
				   *e:�����Ա�L�е�i��λ�õ�ֵ����Ԫ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status CircularLinkListInsert(LinkList *L,int i,ElemType e)
{	
	LinkList p,s;
	int j=1;
    p=*L;
	while(j<i && (p!=*L))
	{
		p=p->next;
		++j;
	}
	if((p==*L) || j>i)
	{
		return ERROR;
	}
    s=(LinkList) malloc(sizeof(Node));   //�����ڴ�
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status CircularLinkListDelete(LinkList *L,int i,ElemType *e)
 * describe      : ���Ա�˳��洢�ṹ��Ԫ��ɾ��	 	
 * parameter in  : L:���Ա�ṹ��
                   i:�����Ա��еĵ�i��λ�ò���Ԫ��
				   e:�����Ա�L�еĵ�i��λ�ò���Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status CircularLinkListDelete(LinkList *L,int i,ElemType *e)
{
	LinkList p,q;
	int j=1;
	p=*L;
	while(j<i&&(p!=*L))
	{
		p=p->next;
		++j;
	}
	if(!(p==*L)||j>i)
	{
		return ERROR;
	}
	q=p->next;
	p->next=q->next;
	*e=q->data;
	free(q);        //�ͷ��ڴ�
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListGetElem(LinkList L,int i,ElemType *e)
 * describe      : ˫�������Ԫ�ػ�ȡ	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ��ȡ���Ա��еĵڼ���Ԫ��
				   *e:�����Ա�L�е�i��Ԫ�ص�ֵ��ֵ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status DulLinkListGetElem(DulLinkList L,int i,ElemType *e)
{	

	int j=1;
	DulLinkList p;
	p=L->next;
	j=1;
	while( p && j<i)
	{
		p=p->next;
		++j;
	}
	if(!p || j>i)
	{
		return ERROR;
	}
	*e=p->data;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListInsert(LinkList *L,int i,ElemType e)
 * describe      : ˫�������Ԫ�ز���	 	
 * parameter in  : L:���Ա�ṹ��
                   i:��Ҫ���뵽���Ա��еĵ�i��λ��
				   *e:�����Ա�L�е�i��λ�õ�ֵ����Ԫ��e
 * parameter out : *e:�������Ա�L�е�i��Ԫ�ص�ֵ
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status DulLinkListInsert(DulLinkList *L,int i,ElemType e)
{	
	DulLinkList p,s;
	int j=1;
    p=*L;
	while(j<i && p)
	{
		p=p->next;
		++j;
	}
	if(!p || j>i)
	{
		return ERROR;
	}
    s=(DulLinkList) malloc(sizeof(Node));   //�����ڴ�
	s->data=e;
	s->prior=p;
	s->next=p->next;
	p->next->prior=s;
	p->next=s;
	return OK;
}

/*---------------------------------------------------------------------------
 * function name : status SingleLinkListDelete(LinkList *L,int i,ElemType *e)
 * describe      : ˫�������Ԫ��ɾ��	 	
 * parameter in  : L:���Ա�ṹ��
                   i:�����Ա��еĵ�i��λ�ò���Ԫ��
				   e:�����Ա�L�еĵ�i��λ�ò���Ԫ��e
 * parameter out : 
                   ������״ֵ̬
---------------------------------------------------------------------------*/ 
status DulLinkListDelete(DulLinkList *L,int i,ElemType *e)
{
	DulLinkList p,q;
	int j=1;
	p=*L;
	while(j<i&&(p->next))
	{
		p=p->next;
		++j;
	}
	if(!(p->next)||j>i)
	{
		return ERROR;
	}
	q=p->next;
	q->prior->next=q->next;
	q->next->prior=q->prior;
	*e=q->data;
	free(q);        //�ͷ��ڴ�
	return OK;
}


