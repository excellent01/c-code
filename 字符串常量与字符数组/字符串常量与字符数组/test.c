#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
char* string_1()
{
	char* p = "hello,world";//�����ھ�̬����ֱ��������������ͷ�
	return p;
}
char* string_2()
{
	char arr[] = "hello,world";//������ջ�����������ý����������ͷ�
	return arr;                //��һ��static����OK
}
int main()
{
	char* p = NULL;
	char* q = NULL;
	p = string_1();
	printf("%s\n", p);
	q = string_2();
	printf("%s\n", q);
	system("pause");
	return 0;
}