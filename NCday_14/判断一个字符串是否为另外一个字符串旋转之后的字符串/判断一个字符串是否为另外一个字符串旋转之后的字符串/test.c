#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate(char* arr, int len)   //��Ԫ�ر����������������ƣ�����Ԫ�ص�ֵ�������һ��Ԫ��
{
	int i = 0;
	char tmp = arr[0];
	for (i = 0; i < len - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = tmp;
}
int judge(char* ch, char* str, int len) 
{
	int n = len;
	while (n)              //��ת������Ϊlen������תlen+1�ξ�����תһ��
	{                        //��ԭ�ַ�����תlen�Σ��������п��ܣ��ڴ˹������������������ǡ������򡰲��ǡ���
		rotate(ch, len);
		if (0 == strcmp(ch, str))
			return 1;
		n--;
	}
	return 0;
}
int main()
{
	char ch[] = "ABCDEF";
	char str[] = "CDEFAB";
	int len = sizeof(ch)-1;
	int ret = 0;
	ret = judge(ch, str, len);
	if (1 == ret)
	{
		printf("��\n");
	}
	else
		printf("����\n");
	system("pause");
	return 0;
}