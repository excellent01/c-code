//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Ժȶ�����ˮ��
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int sum = 0;
	int i = 2;
	int num = 20;
	while (num > 1)
	{
		sum += num;
		num /= i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}