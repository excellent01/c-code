#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char* str1 = "abcs";
	char* str2 = "12345";
	if ((strlen(str1) - strlen(str2))>0)//strlen�����ķ���ֵΪ�޷������ͣ�������ֵ������ڵ���0����������ʽ�����
	{
		printf("str1>str2\n");
	}
	else
		printf("str2>str1\n");
	system("pause");
	return 0;

}