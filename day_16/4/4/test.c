//4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C��������
//���ַ�������������
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char p[])
{
	if (*p != 0)
		reverse_string(p+1);
	printf("%c", *(p-1));
}
int main()
{
	char *str = "abcdef";
	printf("%s\n", str);
	reverse_string(str);
	system("pause");
	return 0;
}