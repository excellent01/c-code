#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[] = "Tom is a boy ";//����һ���ո񣬱���Խ��
	char* pch = (strstr(str, "boy"));
	strncpy(pch, "girl", 4);//ʵ���ַ����滻
	puts(str);
	system("pause");
	return 0;
}