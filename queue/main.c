#include <stdio.h> 
#include "queue.h"

/*************************/
/*循环队列操作           */
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
	printf("队列LQ中的长度是%d\n",a);
	printf("队列LQ中的元素依次是\n");
	for (i=0;i<4;i++)
	{
		printf("%d\n",LQ.data[i]);
	}
	DeQueue(&LQ,&b);
    printf("队列LQ中删除的元素是%d\n",b);
    a=QueueLength(LQ);
	printf("队列LQ中的长度是%d\n",a);
}*/

/*************************/
/*循环队列操作           */
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
	//printf("链队列LQ中的长度是%d\n",a);
	printf("链队列LQ中的元素依次是\n");
	for (i=0;i<4;i++)
	{
		//printf("%d\n",LQ.data[i]);
	}
	//DeLinkQueue(&LQ,&b);
    //printf("队列LQ中删除的元素是%d\n",b);
    //a=QueueLength(LQ);
	//printf("队列LQ中的长度是%d\n",a);
}