#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/************************************************************************/
/* ���Ա�˳��洢�ṹ��Ԫ�ػ�ȡ                                         */
/************************************************************************/
/*int main()
{
  int a=0,i;
  int b=255;
  sqList LM;
  LM.length=5;
  for(i=0;i<LM.length;i++)
  {
	  LM.data[i]=i;
  }
  b=SequenceListGetElem(LM,3,&a);
  printf("���Ա�LM�ĵ�3��Ԫ��Ϊ��%d\n",a);
  printf("����SequenceListGetElem����״̬Ϊ%d\n",b);
}*/

/************************************************************************/
/* ���Ա�˳��洢�ṹ��Ԫ�ز���	                                        */
/************************************************************************/
/*int main()
{
  int b=255;
  int i;
  int j;
  sqList LM;

  LM.length=5;
  for (i=0;i<LM.length;i++)
  {
    LM.data[i]=i;
  }

  b=SequenceListInsert(&LM,3,6);
  printf("���Ա�LM�е�Ԫ��Ϊ������\n");
  for (j=0;j<LM.length;j++)
  {
     printf("%d\n",LM.data[j]);
  }
  printf("����SequenceListInsert����״̬Ϊ%d\n",b);
}*/

/************************************************************************/
/* ���Ա�˳��洢�ṹ��Ԫ��ɾ��                                         */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  int i;
  int j;
  sqList LM;
  LM.length=5;
  for (i=0;i< LM.length;i++)
  {
    LM.data[i]=i;
  }
 
  b=SequenceListDelete(&LM,3,&a);
  printf("���Ա�LMɾ����Ԫ��Ϊ��%d\n",a);
  printf("���Ա�LM�е�Ԫ��Ϊ������\n");
  for (j=0;j<LM.length;j++)
  {
     printf("%d\n",LM.data[j]);
  }
  printf("����SequenceListDelete����״̬Ϊ%d\n",b);
}*/

/************************************************************************/
/* ���Ա���ʽ�洢�ṹ��Ԫ�ض�ȡ                                         */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList head,d,f,g,h;
  head = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
  //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  
  head->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=NULL;

  b=SingleLinkListGetElem(head,4,&a);
  printf("������ĵ�4��Ԫ��Ϊ��%d\n",a);
  printf("����SingleLinkGetElem����״̬Ϊ%d\n",b);

}*/

/************************************************************************/
/* ���Ա����ʽ�洢�ṹ��Ԫ�ز���                                       */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList head,d,f,g,h;
  head = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
  //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;

  head->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=NULL;

  b=SingleLinkListInsert(&head,3,6);
  SingleLinkListGetElem(head,3,&a);
  printf("�������еĵ�3Ԫ��Ϊ%d\n",a);
  printf("����SingleLinkListInsert����״̬Ϊ%d\n",b);
 
}*/

/************************************************************************/
/* ���Ա����ʽ�洢�ṹ��Ԫ��ɾ��                                       */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList head,d,f,g,h;
  head = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
 //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  
  head->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=NULL;

  b=SingleLinkListDelete(&head,3,&a);
  printf("��������ɾ����Ԫ��Ϊ%d\n",a);
  printf("����SingleLinkListDelete����״̬Ϊ%d\n",b);
 }*/

/************************************************************************/
/* ���������������ͷ�巨                                             */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;

  CreateListTail(&LM,5);
  printf("������LM��Ԫ��������\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }
  
 }*/

/************************************************************************/
/* ���������������β�巨                                             */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;
  
  CreateListHead(&LM,5);
  printf("������LM��Ԫ��������\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }
  
 }*/

/************************************************************************/
/* �����������ɾ��                                                     */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;
  
  CreateListHead(&LM,5);
  ClearList(&LM);
  printf("������LM��Ԫ��������\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }

 }*/

/************************************************************************/
/* ��̬����ĳ�ʼ��                                                     */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  StaticLinkList LM;
  for(i=1;i<MAXSIZE-1;i++)
  {
	  LM[i].data=i;
  
  }
  a=InitList(LM);
  printf("����InitList��״̬��%d\n",a);
  printf("��̬����LM��Ԫ��������\n");
  for(i=1;i<MAXSIZE-1;i++)
  {
	 b=LM[i].data;
     printf("%d\n",b);
  }

 }*/

/************************************************************************/
/* ��̬�����Ԫ�ز���                                                   */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=0;
  int c=0;
  StaticLinkList LM;
  a=InitList(LM);
  for(i=1;i<7;i++)
  {
	  LM[i].data=i;
  }
  LM[0].cur=7;
  LM[6].cur=0;
  LM[19].cur=1;
  printf("����InitList��״̬��%d\n",a);
  b=StaticLinkListInsert(LM,3,10);
  printf("����StaticLinkListInsert��״̬��%d\n",b);
  printf("��̬���������Ԫ��������\n");
  for(i=1;i<8;i++)
  {
    c=LM[i].data;
    printf("%d\t%d\n",c,LM[i].cur);
  }

 }*/

/************************************************************************/
/* ��̬�����Ԫ��ɾ��                                                   */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=0;
  int c=0;
  StaticLinkList LM;
  a=InitList(LM);
  for(i=1;i<7;i++)
  {
	  LM[i].data=i;
  }
  LM[0].cur=7;
  LM[6].cur=0;
  LM[19].cur=1;
  printf("����InitList��״̬��%d\n",a);
  b=StaticLinkListInsert(LM,3,10);
  printf("����StaticLinkListInsert��״̬��%d\n",b);
  printf("��̬���������Ԫ��������\n");
  for(i=1;i<8;i++)
  {
    
    printf("%d\t%d\n",LM[i].data,LM[i].cur);
  }
  c=StaticLinkListDelete(LM,1);
  printf("����StaticLinkListDelete��״̬��%d\n",c);
  printf("��̬���������Ԫ��������\n");
  for(i=1;i<8;i++)
  {
    
    printf("%d\t%d\n",LM[i].data,LM[i].cur);
  }
 }*/

/************************************************************************/
/* ѭ�������Ԫ�ض�ȡ                                                   */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList c,d,f,g,h,head;
  c = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
  //c->data=1;  //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  head=c;
  c->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=head;
 
  b=CircularLinkListGetElem(h,3,&a);
  printf("ѭ������ĵ�3��Ԫ��Ϊ��%d\n",a);
  printf("����CircularLinkListGetElem����״̬Ϊ%d\n",b);

}*/

/************************************************************************/
/* ѭ�������Ԫ�ز���                                                   */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList c,d,f,g,h,head;
  c = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
 // c->data=1;   //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  head=c;
  c->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=head;

  b=CircularLinkListInsert(&g,3,6);
  CircularLinkListGetElem(g,3,&a);
  printf("ѭ�������еĵ�3Ԫ��Ϊ%d\n",a);
  printf("����CircularLinkListInsert����״̬Ϊ%d\n",b);
 
}*/

/************************************************************************/
/* ѭ�������Ԫ��ɾ��                                                   */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  LinkList c,d,f,g,h,head;
  c = malloc(sizeof(Node));
  d = malloc(sizeof(Node));
  f = malloc(sizeof(Node));
  g = malloc(sizeof(Node));
  h = malloc(sizeof(Node));
  
 // c->data=1;   //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  head=c;
  c->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=head;

  b=CircularLinkListDelete(&head,3,&a);
  printf("ѭ��������ɾ����Ԫ��Ϊ%d\n",a);
  printf("����CircularLinkListDelete����״̬Ϊ%d\n",b);
 }*/

/************************************************************************/
/* ˫�������Ԫ�ض�ȡ                                                   */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  DulLinkList c,d,f,g,h,head;
  c = malloc(sizeof(DulNode));
  d = malloc(sizeof(DulNode));
  f = malloc(sizeof(DulNode));
  g = malloc(sizeof(DulNode));
  h = malloc(sizeof(DulNode));
  
  //c->data=1;  //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;

  head=c;

  c->next=d;
  c->prior=NULL;

  d->next=f;
  d->prior=c;

  f->next=g;
  f->prior=d;

  g->next=h;
  g->prior=f;

  h->next=NULL;
  h->prior=g;

  b=DulLinkListGetElem(head,3,&a);
  printf("˫������ĵ�3��Ԫ��Ϊ��%d\n",a);
  printf("����DulLinkListGetElem����״̬Ϊ%d\n",b);

}*/

/************************************************************************/
/* ˫�������Ԫ�ز���                                                   */
/************************************************************************/
/*int main()
{
  int a=0;
  int b=255;
  DulLinkList c,d,f,g,h,head;
  c = malloc(sizeof(DulNode));
  d = malloc(sizeof(DulNode));
  f = malloc(sizeof(DulNode));
  g = malloc(sizeof(DulNode));
  h = malloc(sizeof(DulNode));
  
 // c->data=1;   //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  head=c;
  c->prior=NULL;
  d->prior=c;
  f->prior=d;
  g->prior=f;
  h->prior=g;
  
  c->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=NULL;

  b=DulLinkListInsert(&head,3,6);
  DulLinkListGetElem(head,3,&a);
  printf("˫�������еĵ�3��Ԫ��Ϊ%d\n",a);
  printf("����DulLinkListInsert����״̬Ϊ%d\n",b);
 
}*/

/************************************************************************/
/* ˫�������Ԫ��ɾ��                                                   */
/************************************************************************/
int main()
{
  int a=0;
  int b=255;
  DulLinkList c,d,f,g,h,head;
  c = malloc(sizeof(DulNode));
  d = malloc(sizeof(DulNode));
  f = malloc(sizeof(DulNode));
  g = malloc(sizeof(DulNode));
  h = malloc(sizeof(DulNode));
  
 // c->data=1;   //ͷ����������Ϊ��
  d->data=2;
  f->data=3;
  g->data=4;
  h->data=5;
  head=c;
  c->prior=NULL;
  d->prior=c;
  f->prior=d;
  g->prior=f;
  h->prior=g;

  c->next=d;
  d->next=f;
  f->next=g;
  g->next=h;
  h->next=NULL;

  b=DulLinkListDelete(&head,3,&a);
  printf("˫��������ɾ����Ԫ��Ϊ%d\n",a);
  printf("����DulLinkListDelete����״̬Ϊ%d\n",b);
 }


