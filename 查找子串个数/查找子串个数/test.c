#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int substr_count(const char* str, char* sub)
{
	assert(str);    //�������������Ч�Խ��м��
	assert(sub);    //�������������Ч�Խ��м��
	int count = 0;
	const char* s1 = NULL;
	char* s2 = NULL;
	while (*str != '\0')
	{
		s1 = str;
		s2 = sub;//s2��������ָ���Ӵ��Ŀ�ͷ����Ϊ��һ��ѭ����s2�Ѿ�ָ�����Ӵ���
		while ((*s2 == *s1)&&(*s2 != '\0'))//�Ӵ���ĩβΪ\0
		{
			s2++;
			s1++;
		}
		if (*s2 == '\0')// \0��Ϊ�жϱ�־,*s2==\0�Ļ�˵��ǰ��һֱ�Ǻ�
		{
			count++;
		}
		str++;    //��αȽ�ÿһ���ַ�
	}
	return count;
}
int main()
{
	char *str = "hhello hshbyewycb hcbsy hello byBBbx HELLO BYBh hello hsbyb hello";
	char *sub = "hello";
	int ret = 0;
	ret=substr_count(str, sub);
	printf("%d\n", ret);
	system("pause");
	return 0;
}