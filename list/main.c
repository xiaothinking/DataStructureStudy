#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/************************************************************************/
/* 线性表顺序存储结构的元素获取                                         */
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
  printf("线性表LM的第3个元素为：%d\n",a);
  printf("函数SequenceListGetElem返回状态为%d\n",b);
}*/

/************************************************************************/
/* 线性表顺序存储结构的元素插入	                                        */
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
  printf("线性表LM中的元素为依次是\n");
  for (j=0;j<LM.length;j++)
  {
     printf("%d\n",LM.data[j]);
  }
  printf("函数SequenceListInsert返回状态为%d\n",b);
}*/

/************************************************************************/
/* 线性表顺序存储结构的元素删除                                         */
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
  printf("线性表LM删除的元素为：%d\n",a);
  printf("线性表LM中的元素为依次是\n");
  for (j=0;j<LM.length;j++)
  {
     printf("%d\n",LM.data[j]);
  }
  printf("函数SequenceListDelete返回状态为%d\n",b);
}*/

/************************************************************************/
/* 线性表链式存储结构的元素读取                                         */
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
  
  //头结点的数据域为空
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
  printf("单链表的第4个元素为：%d\n",a);
  printf("函数SingleLinkGetElem返回状态为%d\n",b);

}*/

/************************************************************************/
/* 线性表的链式存储结构的元素插入                                       */
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
  
  //头结点的数据域为空
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
  printf("单链表中的第3元素为%d\n",a);
  printf("函数SingleLinkListInsert返回状态为%d\n",b);
 
}*/

/************************************************************************/
/* 线性表的链式存储结构的元素删除                                       */
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
  
 //头结点的数据域为空
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
  printf("单链表中删除的元素为%d\n",a);
  printf("函数SingleLinkListDelete返回状态为%d\n",b);
 }*/

/************************************************************************/
/* 单链表的整表创建，头插法                                             */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;

  CreateListTail(&LM,5);
  printf("单链表LM的元素依次是\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }
  
 }*/

/************************************************************************/
/* 单链表的整表创建，尾插法                                             */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;
  
  CreateListHead(&LM,5);
  printf("单链表LM的元素依次是\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }
  
 }*/

/************************************************************************/
/* 单链表的整表删除                                                     */
/************************************************************************/
/*int main()
{
  int i;
  int a=0;
  int b=255;
  LinkList LM;
  
  CreateListHead(&LM,5);
  ClearList(&LM);
  printf("单链表LM的元素依次是\n");
  for(i=1;i<=5;i++)
  {
	  SingleLinkListGetElem(LM,i,&a);
      printf("%d\n",a);
  }

 }*/

/************************************************************************/
/* 静态链表的初始化                                                     */
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
  printf("函数InitList的状态是%d\n",a);
  printf("静态链表LM的元素依次是\n");
  for(i=1;i<MAXSIZE-1;i++)
  {
	 b=LM[i].data;
     printf("%d\n",b);
  }

 }*/

/************************************************************************/
/* 静态链表的元素插入                                                   */
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
  printf("函数InitList的状态是%d\n",a);
  b=StaticLinkListInsert(LM,3,10);
  printf("函数StaticLinkListInsert的状态是%d\n",b);
  printf("静态链表的数据元素依次是\n");
  for(i=1;i<8;i++)
  {
    c=LM[i].data;
    printf("%d\t%d\n",c,LM[i].cur);
  }

 }*/

/************************************************************************/
/* 静态链表的元素删除                                                   */
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
  printf("函数InitList的状态是%d\n",a);
  b=StaticLinkListInsert(LM,3,10);
  printf("函数StaticLinkListInsert的状态是%d\n",b);
  printf("静态链表的数据元素依次是\n");
  for(i=1;i<8;i++)
  {
    
    printf("%d\t%d\n",LM[i].data,LM[i].cur);
  }
  c=StaticLinkListDelete(LM,1);
  printf("函数StaticLinkListDelete的状态是%d\n",c);
  printf("静态链表的数据元素依次是\n");
  for(i=1;i<8;i++)
  {
    
    printf("%d\t%d\n",LM[i].data,LM[i].cur);
  }
 }*/

/************************************************************************/
/* 循环链表的元素读取                                                   */
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
  
  //c->data=1;  //头结点的数据域为空
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
  printf("循环链表的第3个元素为：%d\n",a);
  printf("函数CircularLinkListGetElem返回状态为%d\n",b);

}*/

/************************************************************************/
/* 循环链表的元素插入                                                   */
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
  
 // c->data=1;   //头结点的数据域为空
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
  printf("循环链表中的第3元素为%d\n",a);
  printf("函数CircularLinkListInsert返回状态为%d\n",b);
 
}*/

/************************************************************************/
/* 循环链表的元素删除                                                   */
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
  
 // c->data=1;   //头结点的数据域为空
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
  printf("循环链表中删除的元素为%d\n",a);
  printf("函数CircularLinkListDelete返回状态为%d\n",b);
 }*/

/************************************************************************/
/* 双向链表的元素读取                                                   */
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
  
  //c->data=1;  //头结点的数据域为空
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
  printf("双向链表的第3个元素为：%d\n",a);
  printf("函数DulLinkListGetElem返回状态为%d\n",b);

}*/

/************************************************************************/
/* 双向链表的元素插入                                                   */
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
  
 // c->data=1;   //头结点的数据域为空
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
  printf("双向链表中的第3个元素为%d\n",a);
  printf("函数DulLinkListInsert返回状态为%d\n",b);
 
}*/

/************************************************************************/
/* 双向链表的元素删除                                                   */
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
  
 // c->data=1;   //头结点的数据域为空
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
  printf("双向链表中删除的元素为%d\n",a);
  printf("函数DulLinkListDelete返回状态为%d\n",b);
 }


