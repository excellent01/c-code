#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
//�ݹ�ʵ�� 
int my_strlen(char arr[])
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + my_strlen(arr + 1);

}
//�ǵݹ�ʵ��
int my_strlen2(char* p)
{
	int count=0;
	while (*p++ != '\0')//*p++�ȼ���*(p++),��ִ��*p,Ȼ��ִ��p++;
	{
		count++;
		/*p++;*/
	}
	return count;
}
int main()
{
	int ret = 0;
	char arr[] = "hello,world";
	ret = my_strlen(arr);
	printf("%d\n", ret);
	ret = my_strlen2(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}