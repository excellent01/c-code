#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("strlen: %d\n", strlen(a));//��a[i]=0ʱ��ͳ��ǰ��Ԫ�صĸ�����Ϊ���ȣ�
	system("pause");                  //(-1)----(-128)----(127)-----0
	return  0;
}