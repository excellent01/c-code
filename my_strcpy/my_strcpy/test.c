#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char * my_strcpy(char* dest, const char* src)//��const������Ч��ֹԴ�ַ������Ķ�
{                                            //����Ϊchar*���Ϳ���ʵ����ʽ���ʣ���ʽ���ʽ��
	char* p = dest;
	assert(dest);          //ָ��ĺϷ��Լ��
	assert(src );          //ָ��ĺϷ��Լ��
	if (dest == src)
	{
		return src;
	}
	while (*p++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char arr[20] = { 0 };
	char *str = "hello world";
	printf("%s\n", my_strcpy(str, str));
	system("pause");
	return 0;
}