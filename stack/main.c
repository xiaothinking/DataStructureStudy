#include <stdio.h>
#include "stack.h"

// 1.链栈没有搞清楚
// 2.用C语言编写一个代码实现： 9+(3-1)*3+10/2
// 3.将2进行推广：做一个可以实现任意数的四则运算 计算器

/*****************************/
/*栈的顺序存储结构 入栈操作 **/
/*****************************/
/*int main()
{
    sqStack LS;
	int a;
	int i;
    for (i=0;i<5;i++)
    {
		LS.data[i]=i; 
    }
    LS.top=4;
	a=Push(&LS,6);
	printf("函数Push返回状态为%d\n",a); //打印
	printf("栈LS中的元素依次是:\n"); //打印
	for (i=0;i<6;i++)
    {
		printf("%d\n",LS.data[i]); 
    }

}*/

/*****************************/
/*栈的顺序存储结构 出栈操作 **/
/*****************************/
/*int main()
{
    sqStack LS;
	int a;
	int b;
	int i;
    for (i=0;i<5;i++)
    {
		LS.data[i]=i; 
    }
    LS.top=4;
	a=Pop(&LS,&b);
	printf("函数Push返回状态为%d\n",a); //打印
	printf("栈LS中的元素依次是:\n"); //打印
	for (i=0;i<4;i++)
    {
		printf("%d\n",LS.data[i]); 
    }	
}*/

/*******************************************/
/*共享空间的栈的顺序存储结构 出入栈操作 ****/
/*******************************************/
int main()
{
    sqDoubleStack  LS;
	int a;
	int b;
	int c;
	int i;
    for (i=0;i<MAXSIZE;i++)
    {
		LS.data[i]=i; 
    }
    LS.top1=8;
    LS.top2=9;
	a=DulPop(&LS,&b,1);
	printf("函数DulPop返回状态为%d\n",a); //打印
	printf("栈LS中的删除元素依次是:\n",b); //打印
    c=DulPush(&LS,22,2);
	for (i=0;i<MAXSIZE;i++)
    {
		printf("%d\n",LS.data[i]); 
    }	
}
