#include <stdio.h>
#include "stack.h"

// 1.��ջû�и����
// 2.��C���Ա�дһ������ʵ�֣� 9+(3-1)*3+10/2
// 3.��2�����ƹ㣺��һ������ʵ������������������ ������

/*****************************/
/*ջ��˳��洢�ṹ ��ջ���� **/
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
	printf("����Push����״̬Ϊ%d\n",a); //��ӡ
	printf("ջLS�е�Ԫ��������:\n"); //��ӡ
	for (i=0;i<6;i++)
    {
		printf("%d\n",LS.data[i]); 
    }

}*/

/*****************************/
/*ջ��˳��洢�ṹ ��ջ���� **/
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
	printf("����Push����״̬Ϊ%d\n",a); //��ӡ
	printf("ջLS�е�Ԫ��������:\n"); //��ӡ
	for (i=0;i<4;i++)
    {
		printf("%d\n",LS.data[i]); 
    }	
}*/

/*******************************************/
/*����ռ��ջ��˳��洢�ṹ ����ջ���� ****/
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
	printf("����DulPop����״̬Ϊ%d\n",a); //��ӡ
	printf("ջLS�е�ɾ��Ԫ��������:\n",b); //��ӡ
    c=DulPush(&LS,22,2);
	for (i=0;i<MAXSIZE;i++)
    {
		printf("%d\n",LS.data[i]); 
    }	
}
