#include <stdio.h> 
#include "queue.h"

/*************************/
/*ѭ�����в���           */
/*************************/
/*int main()
{
	sqQueue LQ;
	int i,a,b;
    InitQueue(&LQ);
    for (i=0;i<4;i++)
    {
		EnQueue(&LQ,i);
    }
    a=QueueLength(LQ);
	printf("����LQ�еĳ�����%d\n",a);
	printf("����LQ�е�Ԫ��������\n");
	for (i=0;i<4;i++)
	{
		printf("%d\n",LQ.data[i]);
	}
	DeQueue(&LQ,&b);
    printf("����LQ��ɾ����Ԫ����%d\n",b);
    a=QueueLength(LQ);
	printf("����LQ�еĳ�����%d\n",a);
}*/

/*************************/
/*ѭ�����в���           */
/*************************/
int main()
{
	LinkQueue LQ;
	int i,a,b;
    InitLinkQueue(&LQ);
    for (i=0;i<4;i++)
    {
		EnLinkQueue(&LQ,i);
    }
    //a=QueueLength(LQ);
	//printf("������LQ�еĳ�����%d\n",a);
	printf("������LQ�е�Ԫ��������\n");
	for (i=0;i<4;i++)
	{
		//printf("%d\n",LQ.data[i]);
	}
	//DeLinkQueue(&LQ,&b);
    //printf("����LQ��ɾ����Ԫ����%d\n",b);
    //a=QueueLength(LQ);
	//printf("����LQ�еĳ�����%d\n",a);
}