//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int my_strlen_1(char *p)
{
	if (*p == 0)
		return 0;
	else
		return 1 + my_strlen_2(p+1);
}
int my_strlen_2(char *p)
{
	int count = 0;
	while (*p++ != 0)
	{
		count++;
	}
	return count;
}
int main()
{
	int ret = 0;
	char str[] = "hello";
	ret=my_strlen_1(str);
	printf("  �ݹ�ʵ��ret=%d\n", ret);
	ret = my_strlen_2(str);
	printf("�ǵݹ�ʵ��ret=%d\n", ret);
	system("pause");
	return 0;
}