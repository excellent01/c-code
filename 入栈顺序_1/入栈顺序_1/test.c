#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void print(int a, int b, int c)   //��������ѹջ��c����ջ,c��ջ�ף�a�����ջ����ջ��
{
	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	print(a, b, c);
	printf("&a=%p\n", &a);//�ֲ�������ջ˳���ȶ��������ջ ��a��ջ�׵�ַ���
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
	system("pause");
	return 0;
}