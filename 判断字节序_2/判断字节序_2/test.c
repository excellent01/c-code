#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
union Un
{
	int i;
	char c;
};
int main()
{
	union Un un;
	un.i = 1;               //����������ĸ��ֽ��д洢1��Ȼ���������ֽڵ����ݣ�Ϊ1��С�ˣ�Ϊ0����
	printf("%d\n", un.c);
	system("pause");
	return 0;
}