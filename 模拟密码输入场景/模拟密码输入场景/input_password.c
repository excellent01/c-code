#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr[20] = "123456";
	int i = 0;
	char arr2[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", arr2);
		if (0 == strcmp("123456", arr2))
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("����������������룺\n");

		}
	}
	if (i >= 3)
	{
		printf("��������������󣬳������\n");
	}
	system("pause");
	return 0;
}