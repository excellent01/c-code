#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strlen(const char* p)
{
	int count = 0;
	assert(p);
	while (*p++)
	{
		count++;
	}
	return count;
}
void reverse_str(char* start,char* end)
{
	assert(start);
	assert(end);
	while (start < end)//���д�� (start++ < end--)�ڽ���ѭ�����ڲ���ʱ���Ѿ��ڽ����ڶ���
	{
		char ch =*start;
		*start = *end;
		*end = ch;
		start++;
		end--;
	}
}
void reverse(char* str)
{
	assert(str);
	int len = my_strlen(str) - 1;
	reverse_str(str, (str , str+len));
	while (*str)
	{
		char* p = str;
		while ((*str != ' ') && (*str!='\0'))
		{
			str++;
		}
		reverse_str(p, str-1);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char str[] = "student a am i";//��д��char* str = "student a am i"�����ַ��������ھ�̬�洢����
	reverse(str);                //�ַ���������ֵ���ܱ��ı䣬��Ҫ�ı�Ӧ����Ϊ�ַ�������
	printf("%s\n", str);
	system("pause");
	return 0;
}